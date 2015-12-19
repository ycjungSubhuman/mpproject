#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <timer.h>
#include <s3c_uart.h>
#include <s3c6410.h>
#include <lcd.h>
#include <signal.h>
#include "scene.h"
#include "object.h"
#include "frame.h"

SCENE currscene;
SCENE oldscene;
SCENE oldsceneodd;

/*void sigsegv_handler(int signum)
  {
  printf("You're DEAD. DEAD. DEAD\n");
  exit(0);
  }*/

static void mango_hw_init(void)
{
	disable_interrupts();
	mango_uart_init(1, 115200);
	mango_timer_init();
	mango_interrupt_init();
	mango_lcd_init();
	enable_interrupts();
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

OBJECT currentscene, banners, startbutton, scoretext[5], playertype, enemypattern;


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
	printf("Enemy gen ready\n");
	scene_additem(enemys[enemysCount]);
	printf("Enemy gened\n");
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
	printf("bullet gen ready \n");
	scene_additem(bullets[bulletsCount]);
	printf("bullet gened\n");
	bulletsCount++;
}

double SQRT(double input)
{
	int i;
	double x = 1;
	for(i=0; i<10; i++) {  x = (x + (input / x)) / 2 ; }    // 이 한줄 땜에 주말내내 머리에 쥐남 ㅠㅠ

	return x ;
}
void nextStage()
{
	if(stage == 5) {
		gamestate = 3;
		currentscene.img = 7;
		scene_additem(&currentscene);
		scene_additem(&startbutton);
	}
	else {
		stage++;
		count = 0;
		mc.type = rand()%4;
		pattern = rand()%5;
		switch(pattern) {
			case 0:
				enemypattern.img = 23;
				break;
			case 1:
				enemypattern.img = 24;
				break;
			case 2:
				enemypattern.img = 25;
				break;
			case 3:
				enemypattern.img = 26;
				break;
			case 4:
				enemypattern.img = 27;
				break;
		}
		switch(mc.type) {
			case 0:
				playertype.img = 19;
				break;
			case 1:
				playertype.img = 20;
				break;
			case 2:
				playertype.img = 21;
				break;
			case 3:
				playertype.img = 22;
				break;
		}
	}
}


void touched(int x, int y)
{
	int i, j;
	switch(gamestate) {
		case 0:
			if(hitTest(300, 300, 200, 120, x, y, 0, 0)) {
				printf("Button Clicked\n");
				srand(TCNTO2_REG);
				gamestate = 1;
				mc.x = 100;
				mc.y = 200;
				mc.z = 3;
				mc.valid = 1;
				score = 0;
				stage = 0;
				for(i = 0; i < 5; i++) {
					scoretext[i].img = 18;
					scoretext[i].x = 280 + 50*i;
					scoretext[i].y = 80;
					scene_additem(&(scoretext[i]));
				}
				scene_removeitem(&startbutton);
				scene_removeitem(&currentscene);
				enemypattern.x = 550;
				enemypattern.y = 80;
				playertype.x = 30;
				playertype.y = 80;
				nextStage();
				scene_additem(&playertype);
				scene_additem(&enemypattern);

				currentscene.img = 4;
				//drawbackground();
				printf("player gen ready\n");
				printf("player genned\n");
				printf("state changed %d\n", gamestate);
			}
			return;
		case 1:
			mc.x = x; mc.y = y;
			return;
		case 2:
			if(hitTest(300, 300, 200, 120, x, y, 0, 0)) {
				gamestate = 0;
				for(i = 0; i < 5; i++) {
					scene_removeitem(&(scoretext[i]));
				}
				currentscene.img = 5;
				scene_removeitem(&currentscene);
				scene_additem(&startbutton);
			}
			return;
		case 3:
			if(hitTest(300, 300, 200, 120, x, y, 0, 0)) {
				gamestate = 0;
				for(i = 0; i < 5; i++) {
					scene_removeitem(&scoretext[i]);
				}
				currentscene.img = 5;
				scene_removeitem(&currentscene);
				scene_additem(&startbutton);
			}
	}
}

int hitTest(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2)
{
	return (x2+w2 > x1 && x1+w1 > x2) && (y2+h2>y1 && y1+h1>y2);
}

void clear_game()
{
	int i, debug = 0;
	printf("Debug Level2: %d", debug++);
	for(i = 0; i < enemysCount; i++)
	{
		scene_removeitem(enemys[i]);
		// free(enemys[i]);
	}
	printf("Debug Level2: %d", debug++);
	for(i = 0; i < bulletsCount; i++) {
		scene_removeitem(bullets[i]);
		free(bullets[i]);
	}
	printf("Debug Level2: %d", debug++);
	enemysCount = 0;
	bulletsCount = 0;
    	oldscene.list[0]->staged = 0;
        scene_removeitem(&playertype);
        scene_removeitem(&enemypattern);
	for(i = 0; i < 5; i++) {
		scoretext[i].x = 280 + 50*i;
		scoretext[i].y = 300;
	}
	currentscene.img = 6;
	scene_additem(&currentscene);
	printf("Debug Level2: %d", debug++);
}

int main()
{
	int i, j, debug;
	char ch;
	static int parity = 0;

	time = 0;
	interrupt = 0;
	gamestate = 0;
	mc.img = 2;
	currscene.size = 0;
	oldscene.size = 0;
	// oldsceneodd.size=0;
	//drawbackground();

	mango_hw_init();
	//signal(SIGSEGV, sigsegv_handler);

	currentscene.x = 300;
	currentscene.y = 200;
	currentscene.img = 5;
	scene_additem(&currentscene);

	banners.x = 0;
	banners.y = 0;
	banners.img = 4;
	scene_additem(&banners);

	startbutton.x = 300;
	startbutton.y = 300;
	startbutton.img = 28;
	scene_additem(&startbutton);

	mc.x = 100;
	mc.y = 200;
	scene_additem(&mc);

	while(1){
		if(interrupt == 1) {
			if(parity){
				frame_service();
				parity = !parity;
			}
			else
				parity = !parity;
			interrupt = 0;
			if(gamestate == 0) {
				bulletsCount = 0;
				enemysCount = 0;
			}
			else if(gamestate == 1) {
				debug = 0;
				//drawing(mc.x, mc.y, height(mc.img), width(mc.img), img(mc.img));
				//printf ("time: %d, score = %d\n", time, score);

				printf("Debug State %d!\n", debug++);
				int temp, scores = score;

				for(i = 4; i >= 0; i--) {
					temp = scores%10;
					if(!(temp == 0 && scoretext[i].img == 18)) {
						scoretext[i].img = temp+8;
					}
					scores /= 10;
				}

				//printf("Debug State %d!\n", debug++);
				switch(mc.type) {
				   // printf("Generating Player Bullets\n");
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
					if(time % 15 == 0) {
						bulletGenerate(mc.x, mc.y-8, 3, 30, 0, 1);
						bulletGenerate(mc.x, mc.y+56, 3, 30, 0, 1);
					}
					break;
					case 3:
					break;
				}
				//printf("Generated Plyer Bullets\n");

			//	printf("Debug State %d!\n", debug++);
				switch(pattern) {
					//printf("Generating Enemies");
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
						if(count <= 30) {
							enemyGenerate(740, 200+rand()%250, 1, -5 - rand()%5, rand()%5-2, 0);
						}
						if(count > 50) {
							nextStage();
						}
						count++;
					}
					break;
					case 2:
					if(time % 40 == 0) {
						if(count <= 5) {
							enemyGenerate(740, 150, 1, -10, 0, 2);
							enemyGenerate(740, 400, 1, -10, 0, 2);
							enemyGenerate(740, 375, 1, -10, 0, 2);
						}
						if(count > 12) {
							nextStage();
						}
						count++;
					}
					break;
					case 3:
					if(time % 20 == 0) {
						if(count <= 10) {
							enemyGenerate(700, 150, 1, 0, 5, 1);
							enemyGenerate(600, 450, 1, 0, -5, 2);
						}
						if(count > 15) {
							nextStage();
						}
						count++;
					}
					break;
					case 4:
					if(time % 10 == 0) {
						if(count <= 20) {
							enemyGenerate(740, 150+rand()%350, 1, -5 - rand()%5, rand()%5 - 2, rand()%3);
						}
						if(count > 30) {
							nextStage();
						}
						count++;
					}
					break;
				}
				//printf("Generated Enemies");
				//printf("Debug State %d!\n", debug++);
				for(i = 0; i < enemysCount; i++) {
					if(hitTest(enemys[i]->x, enemys[i]->y, 64, 64, mc.x+24, mc.y+24, 16, 16)) {
						if(mc.type == 3) {
							enemys[i]->valid = 0;
							score++;
							break;
						}
						else {
							gamestate = 2;
							clear_game();
							mc.valid = 0;
							break;
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
				//printf("Debug State %d!\n", debug++);
				for(j = 0; j < bulletsCount; j++) {
					if(bullets[j]->type >= 2) {
						if(hitTest(mc.x, mc.y, 64, 64, bullets[j]->x, bullets[j]->y, 16, 16)) {
							gamestate = 2;
							clear_game();
							mc.valid = 0;
							break;
						}
					}
				}
				//printf("Debug State %d!\n", debug++);
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
				//printf("Debug State %d!\n", debug++);
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
				//drawbackground();
				//drawing(200, 200, height(1), width(1), img(1));
				//printf ("GAME OVER!, score = %d\n", score);
			}
			else if(gamestate == 3) {
				//drawbackground();
				//drawing(300, 300, height(2), width(2), img(2));
				//printf ("GAME CLEARED!, score = %d\n", score);
			}
		}
		//ch = getchar();
		//if(ch == 'q') break;
		//printf("loop ended : state %d\n", gamestate);
	}

	return 0;
}

