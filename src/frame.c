#include <stdio.h>
#include "frame.h"
#include "s3c6410.h"
#include "lcd.h"
#include "util.h"
#include "scene.h"



static int frame_asserted = 0;

static unsigned background[S3CFB_SIZE];

//vsync handling routines
//two frame buffers are serviced
//into lcd screen in an alternating manner
//to avoid tearing (strange vertical lines on the screen)
static unsigned fb_odd[S3CFB_SIZE];
static unsigned fb_even[S3CFB_SIZE];

extern SCENE currscene;
extern SCENE oldscene;


int frame_is_asserted(void) {
	return frame_asserted;
}

void frame_set_fb(unsigned *fb) {
	unsigned ufb = (unsigned)fb;
	S3C_VIDW00ADD0B0 = ufb; 
	S3C_VIDW00ADD1B0 = S3C_VIDWxxADD1_VBASEL_F(ufb + 
		(PAGE_WIDTH + S3CFB_OFFSET) * S3CFB_VRES);
	S3C_VIDW00ADD2  = S3C_VIDWxxADD2_OFFSIZE_F(S3CFB_OFFSET) |
		S3C_VIDWxxADD2_PAGEWIDTH_F(PAGE_WIDTH);
}

void frame_init(void) {
	int i;

	for (i = 0; i < S3CFB_SIZE; i ++) {
		int x, y;

		x = i % S3CFB_HRES;
		y = i / S3CFB_HRES;

		//background[i] = (((x >> 5) & 1) != ((y >> 5) & 1)) ? 0xFFFFFFFF : 0xFFD7D7D7;
		background[i] = 0xffffff;
		fb_odd[i] = background[i];
		fb_even[i] = background[i];
	}

	/*for (i = 0; i < player_width * player_height; i++) {
		int x, y, ds, limit;

		x = (i % player_width) - (player_width >> 1);
		y = (i / plwyer_width) - (player_height >> 1);
		ds = x * x + y * y;
		limit = (player_width >> 1) * (player_height >> 1);

		//graphics2D also supports alpha value
		//but image data is previously has alpha value 0
		//which reside on MSB
		//outside of circle area remains with alpha value 0.
		if (ds < limit * 9 / 10)
			((unsigned *)player)[i] |= 0xFF000000;
		else if (ds < limit)
			((unsigned *)player)[i] = 0xFF303030;
	}*/

	frame_set_fb(fb_even);
}

void frame_assert(void) {
	frame_asserted = 1;
}

static void implement_your_drawing_here(unsigned *fb);

void frame_service(void) {
	static int parity = 0;

	if (frame_asserted) {
		//it is guaranteed that it is asserted 60 times per sec
		//by lcd vsync timer interrupt
		unsigned *fb_shown;
		unsigned *fb_working;

		fb_shown = parity ? fb_odd : fb_even;
		fb_working = !parity ? fb_odd : fb_even;
		parity = !parity;

		//shows a framebuffer on screen
		frame_set_fb(fb_shown);
		//and working on the other frame buffer
		implement_your_drawing_here(fb_working);

		frame_asserted = 0;
	}
}

static void implement_your_drawing_here(unsigned *fb) {


	/*
	simple drawing without stretching

	gfx_bitblck(fb, (unsigned *)image, 
			S3CFB_HRES, S3CFB_VRES, imagew, imageh, 
			(int)(x), (int)y);
	*/
	int i;
	int size = currscene.size;
	int x, y, z, imagenum;

	printf("scene size : %d\n", size);

    //draw
	for(i=0; i<size; i++)
	{
        //draw background
        /*drawing(oldscene.list[i]->x, oldscene.list[i]->y,
                height(oldscene.list[i]->img), width(oldscene.list[i]->img),
                img(oldscene.list[i]->img), 1);*/
                /*gfx_bitblck(fb, background, 
                	S3CFB_HRES, S3CFB_VRES,
                	width(oldscene.list[i]->img), height(oldscene.list[i]->img),
                	oldscene.list[i]->x, oldscene.list[i]->y);*/

                x = currscene.list[i]->x;
                y = currscene.list[i]->y;
                z = currscene.list[i]->z;
                imagenum = currscene.list[i]->img;

    //draw new things
    //drawing(x, y, height(imagenum), width(imagenum), img(imagenum), 0)
                gfx_bitblck(fb, (unsigned *)img(imagenum), 
                	S3CFB_HRES, S3CFB_VRES,
                	width(imagenum), height(imagenum),
                	x, y);


    //sync oldscene to the currscene
                oldscene.list[i]->x = x;
                oldscene.list[i]->y = y;
                oldscene.list[i]->z = z;
                oldscene.list[i]->img = imagenum;
    }
}