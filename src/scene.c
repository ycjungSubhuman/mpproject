#include "object.h"
#include "scene.h"
#include "lcd.h"
#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include <stdlib.h>

#define VIC0INTENABLE_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x10)
#define VIC0INTENCLEAR_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x14) 

//global scene
extern SCENE currscene;
extern SCENE oldscene;
int height(int idx)
{
	switch(idx) {
		case 1:
			return enemy_height;
		case 2:
			return player_height;
		case 3:
			return bullet_height;
		default:
			return bullet_height;
	}
}

int width(int idx)
{
	switch(idx) {
		case 1:
			return enemy_width;
		case 2:
			return player_width;
		case 3:
			return bullet_width;
		default:
			return bullet_width;
	}
}

int **img(int idx)
{
	switch(idx) {
		case 1:
			return enemy;
		case 2:
			return player;
		case 3:
			return bullet;
		default:
			return bullet;
	}
}

RECT overlapped_rectof(RECT r1, RECT r2)
{
	RECT colrect;

	//first check if it collides
	if(is_point_in_rect(r1, r2.left, r2.top))
	{
		colrect.left = r2.left;
		colrect.top = r2.top;
		colrect.right = r1.right;
		colrect.bottom = r1.bottom;
	}
	else if(is_point_in_rect(r1, r2.right, r2.top))
	{
		colrect.left = r1.left;
		colrect.top = r2.top;
		colrect.right = r2.right;
		colrect.bottom = r1.bottom;
	}
	else if(is_point_in_rect(r1, r2.left, r2.bottom))
	{
		colrect.left = r2.left;
		colrect.top = r1.top;
		colrect.right = r1.right;
		colrect.bottom = r2.bottom;
	}
	else if(is_point_in_rect(r1, r2.right, r2.bottom))
	{
		colrect.left = r1.left;
		colrect.top = r1.top;
		colrect.right = r2.right;
		colrect.bottom = r2.bottom;
	}
	else{//not collides
		colrect.left = 0;
		colrect.top = 0;
		colrect.right = 0;
		colrect.bottom = 0;
	}	

	return colrect;
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

	colrect = overlapped_rectof(oldrect, newrect);
	
	return colrect;
}
int is_point_in_rect(RECT rect, int x, int y)
{
	if(rect.left<=x && x<=rect.right
		&& rect.top<=y && y<=rect.bottom)
	{
		//the point is in the rect
		return 1;
	}
	else return 0;//the point is not in the rect
}
int is_rect_null(RECT rect)
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
	list[ind].left =0;
    list[ind].top =0;
    list[ind].right =0;
    list[ind].bottom =0;
	//shift to fill the deleted cell
	for(i=ind; i<size-1; i++)
	{
		list[i] = list[i+1];
	}
}
static void remove_coldata_from_list(OBJECT* list[], int targetind, int size)
{
	int i, j, colcount;
	OBJECT* target;

	if(targetind<size)//if given proper index
	{
		target = list[targetind];//set target.
		for(i=0; i<targetind; i++){
			colcount = list[i]->collide_count;

			for(j=0; j<colcount; j++){//search through the collist
				if(list[i]->collide_list[j] == target){//if colliding matches, remove it
					delete_obj_from_array(list[i]->collide_list, j, colcount);
					delete_rect_from_array(list[i]->colrect_list, j, colcount);
					//reduce colliding object size by 1
					colcount = --(list[i]->collide_count);
					j--;
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
	int i;
	int size = currscene.size;
	RECT colrect;
	int oldcolind;
    unsigned int temp;

	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);

	//add to the scene list
	currscene.list[size] = obj;
	oldscene.list[size] = (OBJECT*)malloc(sizeof(OBJECT));
	//copy to oldscene
	oldscene.list[size]->x = obj->x;
	oldscene.list[size]->y = obj->y;
	oldscene.list[size]->z = obj->z;

	oldscene.list[size]->img = 0;//default value of "OLD" is 0.
	//it should collide with currscene. 0 means it has not been drawn
	//to the scene yet

	oldscene.list[size]->collide_count = 0;

	//detect collision
	if(size>0){//detect collision only when an object exist before this one
		for(i=0; i<size; i++){
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
	//increase scene item number by 1
	currscene.size++;
	oldscene.size++;

	return obj;

 	//Enable other interrupts
	VIC0INTENABLE_REG = temp;
}
OBJECT* scene_removeitem(OBJECT* obj)
{
    unsigned int temp;
	int i;
	int size = currscene.size;
	OBJECT* result = NULL;
	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);

	//first check where the target is
	for(i=0; i<size; i++)
	{
		if(currscene.list[i] == obj){//if it matches the target
			//first free oldscene object
			free(oldscene.list[i]);

			//remove target's collision data from all elemets of the list
			remove_coldata_from_list(oldscene.list, i, size);

			//delete item form scene item list
			delete_obj_from_array(currscene.list, i, size);
			delete_obj_from_array(oldscene.list, i, size);
			//reduce scene list size by 1
			currscene.size--;
			oldscene.size--;
			i--;

			//breaks immediately because we suppose
			//only one unique entry exists in a scene
			result = obj;
			break;
		}
	}
	//if not found, return null
	return result;

 	//Enable other interrupts
	VIC0INTENABLE_REG = temp;
}
static void redraw_colliding_rect(OBJECT* newone, OBJECT* list[], int targetind, int size)
{
	int i, j, k, colcount;
	RECT drawarea;
	RECT colrect;
	int x, y, h, w;
	int** image;
	OBJECT* target = list[targetind];

	//first, redraw backgrond objects(relative to the target)
	for(i=0; i<targetind; i++)
	{
		colcount = list[i]->collide_count;
		for(j=0; j<colcount; j++)
		{
			if(list[i]->collide_list[j] == target){//if matches the target
				//draw colliding rect
				drawarea = list[i]->colrect_list[j];
				x = list[i]->x;
				y = list[i]->y;
				w = width(list[i]->img);
				h = width(list[i]->img);
				image = img(list[i]->img);

				draw_part(drawarea, x, y, w, h, image);

				//after drawing, remove this item from colliding list
				delete_obj_from_array(list[i]->collide_list, j, colcount);
				delete_rect_from_array(list[i]->colrect_list, j, colcount);
				colcount = --(list[i]->collide_count);
				j--;

				//next, draw upper objects(<lower than target) that collides this area
				//drawing only for this area
				for(k=i+1; k<targetind; j++)
				{
					x = list[k]->x;
					y = list[k]->y;
					w = width(list[k]->img);
					h = width(list[k]->img);
					image = img(list[k]->img);

					draw_part(drawarea, x, y, w, h, image);
				}

				//if the target is found
				//there is no need to search anymore because
				//only one unique item exists in the collide_list
				break;
			}
			else{//if not matched
				//DO NOTHING
			}
		}//serching through collide_list
	}//serching through obj list

	//after redrawing background, update background object's colliding info.
	for(i=0; i<targetind; i++)
	{
		colrect = detect_scene_collision(newone, list[i]);
		if(!is_rect_null(colrect)){
			list[i]->collide_list[list[i]->collide_count] = newone;
			list[i]->colrect_list[list[i]->collide_count++] = colrect;
		}
	}
}

void scene_refresh()
{
	int i, j;
	int size = currscene.size;
	int x, y, w, h;
	unsigned int** image;
    unsigned int temp;
	RECT imagerect;
	RECT imagerect2;
	RECT colrect;

	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);

	//first, check if there is any change in position/img
	for(i=0; i<size; i++)
	{
		if(is_obj_pos_img_diff(*currscene.list[i], *oldscene.list[i]))
		{//if the position or img num of list[i] has been changed

			//redraw colliding areas of back
			redraw_colliding_rect(currscene.list[i], oldscene.list, i, size);

			//draw newly positioned object
			x = currscene.list[i]->x;
			y = currscene.list[i]->y;
			h = height(currscene.list[i]->img);
			w = width(currscene.list[i]->img);
			image = img(currscene.list[i]->img);
			drawing(x, y, h, w, image);

			//redraw colliding part of new upper objects 
			imagerect.left = x;
			imagerect.top = y;
			imagerect.right = x+w;
			imagerect.bottom = y+h;
			for(j=i+1; i<size; i++)
			{
				x = currscene.list[j]->x;
				y = currscene.list[j]->y;
				h = height(currscene.list[j]->img);
				w = width(currscene.list[j]->img);
				image = img(currscene.list[i]->img);
				imagerect2.left = x;
				imagerect2.top = y;
				imagerect2.right = x + w;
				imagerect2.bottom = y + h;
				colrect = overlapped_rectof(imagerect, imagerect2);

				draw_part(colrect, x, y, h, w, image);
			}
		}
		else{//if everything is the same
			//DO NOTHING
		}
	}

	//enable timer signal
	VIC0INTENABLE_REG = temp;
}
