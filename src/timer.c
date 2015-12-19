#include <stdio.h>
#include <timer.h>
#include <s3c_uart.h>
#include <s3c6410.h>
#include "object.h"

extern int interrupt;

void mango_timer_init(void){
  TCFG0_REG = (TCFG0_REG & ~(0xff)) | 0x21; //Prescaler 0: 0x21:33
  TCFG1_REG = (TCFG1_REG & ~(0xf<<4)) | (1<<4); //divider MUX1: 1/2

  TCNTB2_REG = 100000;
  TCMPB2_REG =  50000;

  TCON_REG |= (1<<13); //Timer2 Manual update
  TCON_REG = (TCON_REG & ~(0xf<<12)) | (1<<15) | (1<<12);
  //Timer2 Auto-reload on & Timer2 on
  printf("timer init %d", TCNTO2_REG);
}
void update_game(void){
  interrupt = 1;
}
