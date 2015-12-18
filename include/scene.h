#ifndef __SCENE_H
#define __SCENE_H

#define SCENE_MAX 80
#define MASK_COLOR 0xFF00AA

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
int is_point_in_rect(RECT rect, int x, int y);
int is_rect_null(RECT rect);
RECT overlapped_rectof(RECT r1, RECT r2);
static RECT detect_scene_collision(OBJECT* newone, OBJECT* oldone);
static int is_obj_pos_img_diff(OBJECT o1, OBJECT o2);
static void delete_obj_from_array(OBJECT* list[], int ind, int size);
static void delete_rect_from_array(RECT list[], int ind, int size);
static void remove_coldata_from_list(OBJECT* list[], int targetind, int size);
static void redraw_colliding_rect(OBJECT* newone, OBJECT* list[], int targetind, int size);



OBJECT* scene_additem(OBJECT* obj);
OBJECT* scene_removeitem(OBJECT* obj);
void scene_refresh();


#endif
