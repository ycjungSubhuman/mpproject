#include "object.h"
#include "scene.h"
#include "lcd.h"
#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include "banner.h"
#include "mains.h"
#include "gameover.h"
#include "gameclear.h"
#include "one.h"
#include "two.h"
#include "three.h"
#include "four.h"
#include "five.h"
#include "six.h"
#include "seven.h"
#include "eight.h"
#include "nine.h"
#include "zeroa.h"
#include "zerou.h"
#include "way3.h"
#include "direct.h"
#include "homing.h"
#include "turtle.h"
#include "pattern1.h"
#include "pattern2.h"
#include "pattern3.h"
#include "pattern4.h"
#include "pattern5.h"

#include <stdlib.h>
#include <stdio.h>

#define VIC0INTENABLE_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x10)
#define VIC0INTENCLEAR_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x14) 

//global scene
extern SCENE currscene;
extern SCENE oldscene;
extern SCENE oldsceneodd;
int prevsize=0;
int skipnum = 50;

int height(int idx)
{
	switch(idx) {
		case 0:
			return 480;
		case 1:
			return enemy_height;
		case 2:
			return player_height;
		case 3:
			return bullet_height;
		case 4:
			return banner_height;
		case 5:
			return mains_height;
		case 6:
			return gameover_height;
		case 7:
			return gameclear_height;
		case 8:
			return zeroa_height;
		case 9:
			return one_height;
		case 10:
			return two_height;
		case 11:
			return three_height;
		case 12:
			return four_height;
		case 13:
			return five_height;
		case 14:
			return six_height;
		case 15:
			return seven_height;
		case 16:
			return eight_height;
		case 17:
			return nine_height;
		case 18:
			return zerou_height;
		case 19:
			return way3_height;
		case 20:
			return direct_height;
		case 21:
			return homing_height;
		case 22:
			return turtle_height;
		case 23:
			return pattern1_height;
		case 24:
			return pattern2_height;
		case 25:
			return pattern3_height;
		case 26:
			return pattern4_height;
		case 27:
			return pattern5_height;
		default:
			return bullet_height;
	}
}

int width(int idx)
{
	switch(idx) {
		case 0:
			return 800;
		case 1:
			return enemy_width;
		case 2:
			return player_width;
		case 3:
			return bullet_width;
		case 4:
			return banner_width;
		case 5:
			return mains_width;
		case 6:
			return gameover_width;
		case 7:
			return gameclear_width;
		case 8:
			return zeroa_width;
		case 9:
			return one_width;
		case 10:
			return two_width;
		case 11:
			return three_width;
		case 12:
			return four_width;
		case 13:
			return five_width;
		case 14:
			return six_width;
		case 15:
			return seven_width;
		case 16:
			return eight_width;
		case 17:
			return nine_width;
		case 18:
			return zerou_width;
		case 19:
			return way3_width;
		case 20:
			return direct_width;
		case 21:
			return homing_width;
		case 22:
			return turtle_width;
		case 23:
			return pattern1_width;
		case 24:
			return pattern2_width;
		case 25:
			return pattern3_width;
		case 26:
			return pattern4_width;
		case 27:
			return pattern5_width;
		default:
			return bullet_width;
	}
}

int *img(int idx)
{
	switch(idx) {
		case 0:
			return NULL;
		case 1:
			return enemy;
		case 2:
			return player;
		case 3:
			return bullet;
		case 4:
			return banner;
		case 5:
			return mains;
		case 6:
			return gameover;
		case 7:
			return gameclear;
		case 8:
			return zeroa;
		case 9:
			return one;
		case 10:
			return two;
		case 11:
			return three;
		case 12:
			return four;
		case 13:
			return five;
		case 14:
			return six;
		case 15:
			return seven;
		case 16:
			return eight;
		case 17:
			return nine;
		case 18:
			return zerou;
		case 19:
			return way3;
		case 20:
			return direct;
		case 21:
			return homing;
		case 22:
			return turtle;
		case 23:
			return pattern1;
		case 24:
			return pattern2;
		case 25:
			return pattern3;
		case 26:
			return pattern4;
		case 27:
			return pattern5;
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

OBJECT* scene_additem(OBJECT* obj)
{
    int size = currscene.size;
    int i;

    //Register to curr and old
    currscene.list[size] = obj;
    oldscene.list[size] = (OBJECT*)malloc(sizeof(OBJECT));
    oldscene.list[size]->x = obj->x;
    oldscene.list[size]->y = obj->y;
    oldscene.list[size]->z = obj->z;
    oldscene.list[size]->img = obj->img;

    oldsceneodd.list[size] = (OBJECT*)malloc(sizeof(OBJECT));
    oldsceneodd.list[size]->x = obj->x;
    oldsceneodd.list[size]->y = obj->y;
    oldsceneodd.list[size]->z = obj->z;
    oldsceneodd.list[size]->img = obj->img;

    //increase size by one
    prevsize++;
    currscene.size++;
    oldscene.size++;
    oldsceneodd.size++;

    return obj;
}
OBJECT* scene_removeitem(OBJECT* obj)
{
    int i;
    int size = currscene.size;
    for(i=0; i<size; i++)
    {
        if(currscene.list[i] == obj){//matched
            //delete
            delete_obj_from_array(currscene.list, i, size);
            free(oldscene.list[i]);
            delete_obj_from_array(oldscene.list, i, size);
            free(oldsceneodd.list[i]);
            delete_obj_from_array(oldsceneodd.list, i, size);

            //reduce size
            currscene.size--;
            oldscene.size--;
            oldsceneodd.size--;
            //go back by one
            i--;

            break;
        }
    }

    return obj;
}
/*void scene_refresh()
{
    int i;
    int size = currscene.size;
    int x, y, z, imagenum;

    printf("scene size : %d\n", size);
    
    //draw
    for(i=0; i<size; i++)
    {
        //draw background
        if(prevsize>currscene.size){
            /*drawing(oldscene.list[i]->x, oldscene.list[i]->y,
                    height(oldscene.list[i]->img), width(oldscene.list[i]->img),
                    img(oldscene.list[i]->img), 1);
            skipnum--;
            if(skipnum==0){
                prevsize = currscene.size;
                //drawbackground();
                skipnum = 50;
            }
        }

        x = currscene.list[i]->x;
        y = currscene.list[i]->y;
        z = currscene.list[i]->z;
        imagenum = currscene.list[i]->img;

        //draw new things
        drawing(x, y, height(imagenum), width(imagenum), img(imagenum), 0);


        //sync oldscene to the currscene
        oldscene.list[i]->x = x;
        oldscene.list[i]->y = y;
        oldscene.list[i]->z = z;
        oldscene.list[i]->img = imagenum;
    }
}*/
