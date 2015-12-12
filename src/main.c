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

int main()
{
  char ch;
  
  mc.x = 100;
  mc.y = 100;
  mc.img = 2;

  mango_hw_init();

  
  while(1){
    //drawbackground();
    drawing(mc.x, mc.y, test2_height, test2_width, test2);
/*
    ch = getchar();
    if(ch == 'q') break;
*/
  }

  return 0;
}

