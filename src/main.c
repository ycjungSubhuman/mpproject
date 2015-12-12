#include <stdio.h>
#include <string.h>
#include <s3c_uart.h>
#include <lcd.h>
#include "test2.h"
#include "object.h"

static void mango_hw_init(void)
{
  mango_uart_init(1, 115200);
  mango_interrupt_init();
  mango_lcd_init();
}

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

void enemyGenerate(int x, int y, int img, int xspeed, int yspeed)
{
      enemys[enemysCount].x = x;
      enemys[enemysCount].y = y;
      enemys[enemysCount].img = img;
      enemys[enemysCount].xspeed = xspeed;
      enemys[enemysCount].yspeed = yspeed;
      enemys[enemysCount].valid = 1;
      enemysCount++;
}

void bulletGenerate(int x, int y, int img, int xspeed, int yspeed)
{
      bullets[enemysCount].x = x;
      bullets[enemysCount].y = y;
      bullets[enemysCount].img = img;
      bullets[enemysCount].xspeed = xspeed;
      bullets[enemysCount].yspeed = yspeed;
      bullets[enemysCount].valid = 1;
      bulletsCount++;
}

void touched(int x, int y)
{
  switch(gamestate) {
    case 0:
      gamestate = 1;
      mc.x = 100;
      mc.y = 100;
      mc.img = 2;
      mc.valid = 1;
      score = 0;
      stage = 1;
      drawbackground();
      return;
    case 1:
      mc.x = x;
      mc.y = y;
      return;
    case 2:
      gamestate = 0;
      return;
  }
}

int main()
{
  int time = 0;
  int i, j;
  char ch;
  
  gamestate = 0;

  mango_hw_init();

  
  while(1){
    if(gamestate == 0) {
    }
    else if(gamestate == 1) {
    drawing(mc.x, mc.y, height(mc.img), width(mc.img), img(mc.img));

    printf ("time: %d, score = %d\n", time, score);
    if(time % 20 == 0) {
      bulletGenerate(mc.x, mc.y, 2, 10, 0);
    }
    if(time % 100 == 0) {
      enemyGenerate(700, time%500, 2, -5, 0);
    }
    for(i = 0; i < enemysCount; i++) {
       if(enemys[i].x < mc.x && enemys[i].x + 60 > mc.x && enemys[i].y < mc.y && enemys[i].y + 60 > mc.y) {
         gamestate = 2;
         mc.valid = 0;
       }
       for(j = 0; j < bulletsCount; j++) {
          if(enemys[i].x < bullets[j].x && enemys[i].x + 60 > bullets[j].x && enemys[i].y < bullets[j].y && enemys[i].y + 60 > bullets[j].y) {
            enemys[i].valid = 0;
            bullets[i].valid = 0;
            score++;
          }
       }
    }
    for(i = 0; i < enemysCount; i++) {
      enemys[i].x += enemys[i].xspeed;
      enemys[i].y += enemys[i].yspeed;
      if(enemys[i].x < 0) enemys[i].valid = 0;
      if(enemys[i].valid == 1) {
        drawing(enemys[i].x, enemys[i].y, height(enemys[i].img), width(enemys[i].img), img(enemys[i].img));
      }
      if(enemys[i].valid == 0) {
        enemysCount--;
        for(j = i; j < enemysCount; j++) {
           enemys[j] = enemys[j+1];
        }
        i--;
      }
    }
    for(i = 0; i < bulletsCount; i++) {
      bullets[i].x += bullets[i].xspeed;
      bullets[i].y += bullets[i].yspeed;
      if(bullets[i].x > 700) bullets[i].valid = 0;
      if(bullets[i].valid == 1) {
        drawing(bullets[i].x, bullets[i].y, height(bullets[i].img), width(bullets[i].img), img(bullets[i].img));
      }
      if(bullets[i].valid == 0) {
        bulletsCount--;
        for(j = i; j < bulletsCount; j++) {
           bullets[j] = bullets[j+1];
        }
        i--;
      }
    }
    time++;
    }
    else if(gamestate == 2) {
      printf ("GAME OVER!, score = %d\n", score);
      drawbackground();
    }
/*
    ch = getchar();
    if(ch == 'q') break;
*/
  }

  return 0;
}

