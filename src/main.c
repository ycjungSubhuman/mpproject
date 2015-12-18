#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <timer.h>
#include <s3c_uart.h>
#include <s3c6410.h>
#include <lcd.h>
#include "scene.h"
#include "object.h"

SCENE currscene;
SCENE oldscene;

static void mango_hw_init(void)
{
	mango_uart_init(1, 115200);
	mango_timer_init();
	mango_interrupt_init();
	mango_lcd_init();
}

Player mc;
Enemy  *enemys[100];
int enemysCount;
Bullet *bullets[1000];
int bulletsCount;

int score;
int stage;
int gamestate;
int time;
int interrupt;
int pattern;
int count;



void enemyGenerate(int x, int y, int img, int xspeed, int yspeed, int type)
{
	enemys[enemysCount] = (Enemy*)malloc(sizeof(Enemy));
	enemys[enemysCount]->x = x;
	enemys[enemysCount]->y = y;
	enemys[enemysCount]->z = 2;
	enemys[enemysCount]->img = img;
	enemys[enemysCount]->xspeed = xspeed;
	enemys[enemysCount]->yspeed = yspeed;
	enemys[enemysCount]->type = type;
	enemys[enemysCount]->valid = 1;
	scene_additem(enemys[enemysCount]);
	enemysCount++;
}

void bulletGenerate(int x, int y, int img, int xspeed, int yspeed, int type)
{
	bullets[bulletsCount] = (Bullet*)malloc(sizeof(Bullet));
	bullets[bulletsCount]->x = x;
	bullets[bulletsCount]->y = y;
	bullets[bulletsCount]->z = 1;
	bullets[bulletsCount]->img = img;
	bullets[bulletsCount]->xspeed = xspeed;
	bullets[bulletsCount]->yspeed = yspeed;
	bullets[bulletsCount]->type = type;
	bullets[bulletsCount]->valid = 1;
	scene_additem(bullets[bulletsCount]);
	bulletsCount++;
}

double SQRT(double input)
{
	int i;
	double x = 1;
      for(i=0; i<10; i++) {  x = (x + (input / x)) / 2 ; }    // 이 한줄 땜에 주말내내 머리에 쥐남 ㅠㅠ

 	return x ;
}

void touched(int x, int y)
{
	switch(gamestate) {
	case 0:
		if(hitTest(100, 100, 64, 64, x, y, 0, 0)) {
			srand(TCNTO2_REG);
			gamestate = 1;
			mc.x = 100;
			mc.y = 100;
			mc.z = 3;
			mc.valid = 1;
			mc.type = rand()%5;
			score = 0;
			stage = 1;
			count = 0;
			pattern = rand()%5;
			drawbackground();
			scene_additem(&mc);
		}
	return;
	case 1:
	mc.x = x;
	mc.y = y;
	return;
	case 2:
		if(hitTest(200, 200, 64, 64, x, y, 0, 0)) {
			gamestate = 0;
			drawbackground();
		}
	return;
	case 3:
		if(hitTest(300, 300, 16, 16, x, y, 0, 0)) {
			gamestate = 0;
			drawbackground();
		}
	}
}

void nextStage()
{
	if(stage == 5) {
		gamestate = 3;
	}
	else {
		stage++;
		count = 0;
		pattern = rand()%5;
		mc.type = rand()%5;
	}
}

int hitTest(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2)
{
	return (x2+w2 > x1 && x1+w1 > x2) && (y2+h2>y1 && y1+h1>y2);
}

int main()
{
	int i, j;
	char ch;
	
	time = 0;
	interrupt = 0;
	gamestate = 0;
	mc.img = 2;
	drawbackground();

	mango_hw_init();
	
	while(1){
		if(interrupt == 1) {
			scene_refresh();
			interrupt = 0;
			if(gamestate == 0) {
				drawing(100, 100, height(mc.img), width(mc.img), img(mc.img));
				bulletsCount = 0;
				enemysCount = 0;
			}
			else if(gamestate == 1) {
				//drawing(mc.x, mc.y, height(mc.img), width(mc.img), img(mc.img));

				printf ("time: %d, score = %d\n", time, score);

				switch(mc.type) {
					case 0:
						if(time % 20 == 0) {
							bulletGenerate(mc.x, mc.y+24, 3, 30, 0, 0);
							bulletGenerate(mc.x, mc.y+24, 3, 30, 5, 0);
							bulletGenerate(mc.x, mc.y+24, 3, 30, -5, 0);
						}
						break;
					case 1:
						if(time % 15 == 0) {
							bulletGenerate(mc.x, mc.y-8, 3, 30, 0, 0);
							bulletGenerate(mc.x, mc.y+24, 3, 30, 0, 0);
							bulletGenerate(mc.x, mc.y+56, 3, 30, 0, 0);
						}
						break;
					case 2:
						if(time % 25 == 0) {
							bulletGenerate(mc.x, mc.y-8, 3, 30, 0, 1);
							bulletGenerate(mc.x, mc.y+24, 3, 30, 0, 1);
							bulletGenerate(mc.x, mc.y+56, 3, 30, 0, 1);
						}
						break;
					case 3:
						if(time % 20 == 0) {
							bulletGenerate(mc.x, mc.y+24, 3, 30, 0, 0);
							bulletGenerate(mc.x, mc.y+24, 3, 30, 5, 0);
							bulletGenerate(mc.x, mc.y+24, 3, 30, -5, 0);
						}
						break;
					case 4:
						break;
				}

				switch(pattern) {
					case 0:
						if(time % 50 == 0) {
							if(count <= 5) {
								enemyGenerate(740, 150+rand()%100, 1, -5 - rand()%5, 0, 1);
								enemyGenerate(740, 250+rand()%100, 1, -5 - rand()%5, 0, 1);
								enemyGenerate(740, 350+rand()%100, 1, -5 - rand()%5, 0, 1);
							}
							if(count > 7) {
								nextStage();
							}
							count++;
						}
						break;
					case 1:
						if(time % 5 == 0) {
							if(count <= 50) {
								enemyGenerate(740, 200+rand()%250, 1, -5 - rand()%5, rand()%5-2, 0);
							}
							if(count > 100) {
								nextStage();
							}
							count++;
						}
						break;
					case 2:
						if(time % 40 == 0) {
							if(count <= 10) {
								if(count % 2 == 0) {
									enemyGenerate(740, 150, 1, -10, 0, 2);
									enemyGenerate(740, 400, 1, -10, 0, 2);
								}
								else enemyGenerate(740, 375, 1, -10, 0, 2);
							}
							if(count > 12) {
								nextStage();
							}
							count++;
						}
						break;
					case 3:
						if(time % 20 == 0) {
							if(count <= 20) {
									enemyGenerate(700, 150, 1, 0, 5, 1);
									enemyGenerate(600, 450, 1, 0, -5, 2);
							}
							if(count > 25) {
								nextStage();
							}
							count++;
						}
						break;
					case 4:
						if(time % 50 == 0) {
							if(count <= 10) {
								enemyGenerate(740, 150+rand()%350, 1, -5 - rand()%5, rand()%5 - 2, rand()%3);
							}
							if(count > 12) {
								nextStage();
							}
							count++;
						}
						break;
				}
				for(i = 0; i < enemysCount; i++) {
					if(hitTest(enemys[i]->x, enemys[i]->y, 64, 64, mc.x+24, mc.y+24, 16, 16)) {
						if(mc.type == 4) {
							enemys[i]->valid = 0;
							score++;
							break;
						}
						else {
							 gamestate = 2;
							 mc.valid = 0;
						}
					}
					 for(j = 0; j < bulletsCount; j++) {
						if(bullets[j]->type <= 1) {
							if(hitTest(enemys[i]->x, enemys[i]->y, 64, 64, bullets[j]->x, bullets[j]->y, 16, 16)) {
								enemys[i]->valid = 0;
								bullets[j]->valid = 0;
								score++;
								break;
							}
						}
					}
				}
				for(j = 0; j < bulletsCount; j++) {
					if(bullets[j]->type >= 2) {
						if(hitTest(mc.x, mc.y, 64, 64, bullets[j]->x, bullets[j]->y, 16, 16)) {
							 gamestate = 2;
							 mc.valid = 0;
						}
					}
				}
				for(i = 0; i < enemysCount; i++) {
					enemys[i]->x += enemys[i]->xspeed;
					enemys[i]->y += enemys[i]->yspeed;
					if(enemys[i]->x < 0) enemys[i]->valid = 0;
					if(enemys[i]->y < 150) enemys[i]->valid = 0;
					if(enemys[i]->y > 480) enemys[i]->valid = 0;
					switch(enemys[i]->type) {
						case 0:
							break;
						case 1:
							if(time % 49 == 2) {
								bulletGenerate(enemys[i]->x, enemys[i]->y+24, 3, -5, 0, 2);
								bulletGenerate(enemys[i]->x, enemys[i]->y+24, 3, -5, 3, 2);
								bulletGenerate(enemys[i]->x, enemys[i]->y+24, 3, -5, -3, 2);
							}
							break;
						case 2:
							if(time % 47 == 2) {
								int size = (int)SQRT((mc.x-enemys[i]->x)*(mc.x-enemys[i]->x)+(mc.y-enemys[i]->y)*(mc.y-enemys[i]->y));
								bulletGenerate(enemys[i]->x, enemys[i]->y+24, 3, (mc.x-enemys[i]->x)*10/size, (mc.y-enemys[i]->y)*10/size, 2);
							}
							break;
					}
					if(enemys[i]->valid == 1) {
						//drawing(enemys[i]->x, enemys[i]->y, height(enemys[i]->img), width(enemys[i]->img), img(enemys[i]->img));
					}
					if(enemys[i]->valid == 0) {
						enemysCount--;
						scene_removeitem(enemys[i]);
						free(enemys[i]);
						for(j = i; j < enemysCount; j++) {
							enemys[j] = enemys[j+1];
						}
						i--;
					 }
				 }
				 for(i = 0; i < bulletsCount; i++) {
					switch(bullets[i]->type) {
						case 1:
							if(enemysCount != 0) {
								int size = (int)SQRT((enemys[0]->x-bullets[i]->x)*(enemys[0]->x-bullets[i]->x)+(enemys[0]->y-bullets[i]->y)*(enemys[0]->y-bullets[i]->y));
								bullets[i]->x += (enemys[0]->x - bullets[i]->x) * 20 / size;
								bullets[i]->y += (enemys[0]->y - bullets[i]->y) * 20 / size;
								break;
							}
						case 0:
						case 2:
							bullets[i]->x += bullets[i]->xspeed;
							bullets[i]->y += bullets[i]->yspeed;
							break;
					}
					if(bullets[i]->x < 0) bullets[i]->valid = 0;
					if(bullets[i]->x > 750) bullets[i]->valid = 0;
					if(bullets[i]->y > 480) bullets[i]->valid = 0;
					if(bullets[i]->y < 150) bullets[i]->valid = 0;
					if(bullets[i]->valid == 1) { 
						//drawing(bullets[i]->x, bullets[i]->y, height(bullets[i]->img), width(bullets[i]->img), img(bullets[i]->img));
					}
					if(bullets[i]->valid == 0) {
						bulletsCount--;
						scene_removeitem(bullets[i]);
						free(bullets[i]);
						for(j = i; j < bulletsCount; j++) {
							bullets[j] = bullets[j+1];
							 }
						i--;
					}
				 }
				 time++;
			 }
			 else if(gamestate == 2) {
				drawbackground();
				//drawing(200, 200, height(1), width(1), img(1));
				printf ("GAME OVER!, score = %d\n", score);
			}
			else if(gamestate == 3) {
				drawbackground();
				//drawing(300, 300, height(2), width(2), img(2));
				printf ("GAME CLEARED!, score = %d\n", score);
			}
		}
		//ch = getchar();
		//if(ch == 'q') break;
	}

	return 0;
}

