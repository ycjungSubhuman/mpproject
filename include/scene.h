#ifndef __SCENE_H
#define __SCENE_H

typedef struct rect{
	int left, top, right, bottom;
}RECT;

typedef struct object{
	int x, y, z;
	int img;

	//don't use in currscene
	int collide_count;

	//collision list
	struct object* collide_list[SCENE_MAX];
	//collision rect. relative position
	RECT colrect_list[SCENE_MAX];
}OBJECT;

typedef struct scene{
	OBJECT* list[SCENE_MAX];
	int size;
}SCENE;

int height(int idx);
int width(int idx);
int** img(int idx);
static RECT detect_scene_collision(OBJECT* newone, OBJECT* oldone);
static int is_point_in_rect(RECT rect, int x, int y);
static int is_rect_null(RECT rect);
static int is_obj_pos_img_diff(OBJECT o1, OBJECT o2);
static void delete_obj_from_array(OBJECT* list[], int ind, int size);
static void delete_rect_from_array(RECT list[], int ind, int size);
static void reload_coldata_from_scene(OBJECT* list[], int ind, int size);



OBJECT* scene_additem(OBJECT* obj);
OBJECT* scene_removeitem(OBJECT* obj);
void scene_refresh();


#endif
