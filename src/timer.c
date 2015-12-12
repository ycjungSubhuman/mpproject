#include <stdio.h>
#include <timer.h>
#include <s3c_uart.h>
#include <s3c6410.h>

void mango_timer2_init(void){
  TCFG0_REG = (TCFG0_REG & ~(0xff)) | 0x20; //Prescaler 0: 0x20:32
  TCFG1_REG = (TCFG1_REG & ~(0xf<<4)) | (1<<4); //divider MUX1: 1/2

  TCNTB2_REG = 10000;

  TCON_REG |= (1<<13); //Timer2 Manual update
  TCON_REG = (TCON_REG & ~(0xf<<12)) | (1<<15) | (1<<12);
  //Timer2 Auto-reload on & Timer2 on
}

void game_update(){
  /*do things in game*/
}
