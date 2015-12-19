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

/*these are only for oldscene. don't access from currscene*/
/*--------------------------------------------------------*/
	int staged;
/*---------------------------------------------------------*/
}OBJECT;

typedef struct scene{
	OBJECT* list[SCENE_MAX];
	int size;
}SCENE;

int height(int idx);
int width(int idx);
int* img(int idx);
int is_point_in_rect(RECT rect, int x, int y);
int is_rect_null(RECT rect);
RECT overlapped_rectof(RECT r1, RECT r2);


OBJECT* scene_additem(OBJECT* obj);
OBJECT* scene_removeitem(OBJECT* obj);
void scene_refresh();


#endif
