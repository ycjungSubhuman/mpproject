#ifndef __SCENE_H
#define __SCENE_H

typedef struct rect{
	int left, top, right, bottom;
}RECT;

typedef struct object{
	int x, y, z;
	int img;

	//don't use in currscene
	int collide_count = 0;

	//collision list
	struct object* collide_list[SCENE_MAX];
	//collision rect. relative position
	RECT colrect_list[SCENE_MAX];
}OBJECT;

typedef struct scene{
	OBJECT* list[SCENE_MAX] = {NULL};
	int size = 0;
}SCENE;

int height(int idx);
int width(int idx);
int** img(int idx);
RECT detect_scene_collision(OBJECT* newone, OBJECT* oldone);
int is_point_in_rect(RECT rect, int x, int y);


OBJECT* scene_add(OBJECT* obj);
OBJECT* scene_remove(OBJECT* obj);
void scene_refresh();


#endif
