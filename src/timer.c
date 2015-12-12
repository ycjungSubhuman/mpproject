#include <stdio.h>

#include <s3c_uart.h>
#include <s3c6410.h>

void mango_timer_init(void){
  TCFG0_REG = (TCFG0_REG & ~(0xff)) | 0x21; //Prescaler 0: 0x21:33
  TCFG1_REG = (TCFG1_REG & ~(0xf<<4)) | (1<<4); //divider MUX1: 1/2

  TCNTB2_REG = 0xffffffff;
  TCMPB2_REG = 0xffffffff - 1;

  TCON_REG |= (1<<13); //Timer2 Manual update
  TCON_REG = (TCON_REG & ~(0xf<<12)) | (1<<15) | (1<<12);
  //Timer2 Auto-reload on & Timer2 on
}

void udelay(int usec){
  volatile unsigned long now, last, diff;
  now = TCNTO1_REG;

  /* Implement here */

  return;
}

void mango_hw_init(void){
  mango_timer_init();
  mango_uart_init(1, 115200);
}

void mango_menu_1_sec_delay(void){
  int i;
  for (i = 0; i < 10; i++){
    udelay (1000*1000);
    printf ("1 sec delay test %d\n", i);
  }
}


void mango_menu_main(void){
  int c;

  while(1){
    printf ("\nMain menu\n");
    printf ("1> Timer Test\n");
    printf ("x> Exit\n");
    c = getchar();
    printf ("\n%c is selected\n", c);

    switch(c){
      case '1':
        mango_menu_1_sec_delay();
        break;
      case 'x':
        goto finished;
      default:
        printf ("Invalid button\n");
    }
  }
  finished:
    return;
}

int main(void){
  mango_hw_init();
  mango_menu_main();
  return 0;
}
