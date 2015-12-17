#include "object.h"
#include "scene.h"
#include <stdlib.h>
#define SCENE_MAX 80
#define MASK_COLOR 0xFF00AA
#define VIC0INTENABLE_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x10)
#define VIC0INTENCLEAR_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x14) 

//global scene
extern SCENE currscene;
extern SCENE oldscene;

int height(int idx)
{
  switch(idx) {
    case 2:
      return test2_height;
    default:
      return test2_height;
  }
}

int width(int idx)
{
  switch(idx) {
    case 2:
      return test2_width;
    default:
      return test2_width;
  }
}

int **img(int idx)
{
  switch(idx) {
    case 2:
      return test2;
    default:
      return test2;
  }
}

//detects collision
static RECT detect_scene_collision(OBJECT* newone, OBJECT* oldone)
{
	RECT newrect;
	RECT oldrect;
	RECT colrect;

	//load l, t, r, b;
	newrect.left = newone->x;
	newrect.top = newone->y;
	newrect.right = newrect.left + width(newone->img);
	newrect.bottom = newrect.top + width(newone->img);

	oldrect.left = oldone->x;
	oldrect.top = oldone->y;
	oldrect.right = oldrect.left + width(oldone->img);
	oldrect.bottom = oldrect.top + width(oldone->img);

	//first check if it collides
	if(is_point_in_rect(oldrect, newrect.left, newrect.top)
	{
		colrect.left = newrect.left;
		colrect.top = newrect.top;
		colrect.right = oldrect.right;
		colrect.bottom = oldrect.bottom;
	}
	else if(is_point_in_rect(oldrect, newrect.right, newrect.top))
	{
		colrect.left = oldrect.left;
		colrect.top = newrect.top;
		colrect.right = newrect.right;
		colrect.bottom = oldrect.bottom;
	}
	else if(is_point_in_rect(oldrect, newrect.left, newrect.bottom))
	{
		colrect.left = newrect.left;
		colrect.top = oldrect.top;
		colrect.right = oldrect.right;
		colrect.bottom = newrect.bottom;
	}
	else if(is_point_in_rect(oldrect, newrect.right, newrect.bottom))
	{
		colrect.left = oldrect.left;
		colrect.top = oldrect.top;
		colrect.right = newrect.right;
		colrect.bottom = newrect.bottom;
	}
	else{//not collides
		colrect.left = 0;
		colrect.top = 0;
		colrect.right = 0;
		colrect.bottom = 0;
	}	

	return colrect;
}
static int is_point_in_rect(RECT rect, int x, int y)
{
	if(rect.left<=x && x<=rect.right
		&& rect.top<=y && y<=rect.bottom)
	{
		//the point is in the rect
		return 1;
	}
	else return 0;//the point is not in the rect
}
static int is_rect_null(RECT rect)
{
	if(rect.left==0 && rect.top==0
		&& rect.right==0 && rect.bottom==0)
	{//it is null
		return 1;
	}
	else return 0;//it is not a null
}
static int is_obj_pos_img_diff(OBJECT o1, OBJECT o2)
{
	if(o1.x==o2.x && o1.y==o2.y
		&&o1.z==o2.z && o1.img==o2.img)
	{//o1, o2, matches
		return 0;
	}
	else return 1;//o1, o2 diff
}
static void delete_obj_from_array(OBJECT* list[], int ind, int size)
{
	int i;
	//first NULLify deleted cell
	list[ind] = NULL;
	//shift to fill the deleted cell
	for(i=ind; i<size-1; i++)
	{
		list[i] = list[i+1];
	}
}
static void delete_rect_from_array(RECT list[], int ind, int size)
{
	int i;
	//first NULLify deleted cell
	list[ind] = NULL;
	//shift to fill the deleted cell
	for(i=ind; i<size-1; i++)
	{
		list[i] = list[i+1];
	}
}
static void reload_coldata_from_scene(OBJECT* list[], int ind, int size)
{
	int i, j, colcount;
	OBJECT* target;
	if(ind<size)//if given proper index
	{
		for(i=0; i<ind; i++){
			colcount = list[i]->collide_count;
			target = list[i];

			for(j=0; j<colcount; j++){//search through the collist
				if(list[i]->collide_list[j] == target){//if colliding matches, remove it
					delete_obj_from_array(list[i]->collide_list, j, colcount);
					delete_rect_from_array(list[i]->colrect_list, j, colcount);
					colcount = list[i]->collide_count-1;
				}
				else{//if not matches
					//DO NOTHING
				}
			}
		}
	}
	else return;
}

OBJECT* scene_additem(OBJECT* obj)
{
	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);
	int i;
	int size = currscene.size;
	RECT colrect;
	int oldcolind;

	//add to the scene list
	currscene.list[size] = obj;
	oldscene.list[size] = (OBEJCT*)malloc(sizeof(OBJECT));
	//copy to oldscene
	oldscene.list[size]->x = obj->x;
	oldscene.list[size]->y = obj->y;
	oldscene.list[size]->z = obj->z;
	oldscene.list[size]->img = obj->img;
	oldscene.list[size]->collide_count = 0;

	//detect collision
	if(size>0){//detect collision only when an object exist before this one
		for(i=0; i<size-1; i++){
			colrect = detect_scene_collision(obj, oldscene.list[i]);
			if(!is_rect_null(colrect))//if it collides
			{
				//load collide count index
				oldcolind = oldscene.list[i]->collide_count++;

				//add obj to colliding list of the existing OBJ
				oldscene.list[i]->collide_list[oldcolind] = obj;
				oldscene.list[i]->colrect_list[oldcolind] = colrect;
			}
			else{//if not collides
				//DO NOTHING
			}
		}
	}
	else{//if added obj is the first one, collision is not marked
			//DO NOTHING
	}

	return obj;

 	//Enable other interrupts
	VIC0INTENABLE_REG = temp;
}
OBJECT* scene_removeitem(OBJECT* obj)
{
	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);
	OBJECT* result = NULL;
	int i, j;
	int size = currscene.size;

	//first check where the target is
	for(i=0; i<size; i++)
	{
		if(currscene.list[i] == obj){//if it matches the target
			//first free oldscene object
			free(oldscene.list[i]);

			//reread collide list. remove i-th and remove i's from the back
			reload_coldata_from_scene(oldscene.list, i, size);

			//delete form scene
			delete_obj_from_array(currscene.list, i, size);
			delete_obj_from_array(oldscene.list, i, size);
			currscene.size--;
			oldscene.size--;

			//breaks immediately because we suppose
			//only one unique entry exist in scene
			result = obj;
			break;
		}
	}
	//if not found, return null
	return result;

 	//Enable other interrupts
	VIC0INTENABLE_REG = temp;
}
void scene_refresh()
{
	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);
	int i;
	int size = currscene.size;

	//first, check if there is any change in position/img
	for(i=0; i<size; i++)
	{
		if(is_obj_pos_img_diff(*currscene.list[i], *oldscene.list[i])
		{//if the position or img num has been changed

			//redraw colliding areas of back
			redraw_colliding_rect(oldscene.list, i, size);

			//update collision areas of back
		}
		else{//if everything is the same
			//DO NOTHING
		}
	}


	//enable timer signal
	VIC0INTENABLE_REG = temp;
}
