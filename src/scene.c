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
RECT detect_scene_collision(OBJECT* newone, OBJECT* oldone)
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
	if(is_point_in_rect(oldrect, newrect.left)
		||is_point_in_rect(oldrect, newrect.top)
		||is_point_in_rect(oldrect, newrect.right)
		||is_point_in_rect(oldrect, newrect.bottom))
	{//if collides
		colrect.top = 




	}
	else{//not collides
		return (RECT)NULL;
	}	



}

OBJECT* scene_add(OBJECT* obj)
{
	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);
	int i;

	//add to the scene list
	currscene.list[size] = obj;
	oldscene.list[size] = (OBEJCT*)malloc(sizeof(OBJECT));
	//copy to oldscene
	oldscene.list[size]->x = obj->x;
	oldscene.list[size]->y = obj->y;
	oldscene.list[size]->z = obj->z;
	oldscene.list[size]->img = obj->img;

	//detect collision
	if(size>0){//detect collision only when an object exist before this one
		for(i=0; i<size-1; i++){
				
		}
	}
	else{//if added obj is the first one, collision is not marked
			//DO NOTHING
	}


	return obj;

 	//Enable other interrupts
	VIC0INTENABLE_REG = temp;
}
OBJECT* scene_remove(OBJECT* obj)
{
	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);
	int i, j;

	//first check where it is
	for(i=0; i<size; i++)
	{
		if(currscene.list[i] == obj){
			//first free oldscene object
			free(oldscene.list[i]);
			//then put NULL to list[i]
			currscene.list[i] = NULL;
			oldscene.list[i] = NULL;
			//shift left
			for(j=i; j<size-1; j++){
				currscene.list[j] = currscene.list[j+1];
				oldscene.list[j] = oldscene.list[j+1];
			}
			return obj;
		}
	}
	//if not found, return null
	return NULL;

 	//Enable other interrupts
	VIC0INTENABLE_REG = temp;
}
void scene_refresh()
{
	//block TIMER2 SIGNAL
	temp = VIC0INTENABLE_REG;
	VIC0INTENCLEAR_REG = (1<<25);

	//first, check if there is any change in position/img

	//enable timer signal
	VIC0INTENABLE_REG = temp;
}
