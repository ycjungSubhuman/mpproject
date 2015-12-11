#include <stdio.h>
#include <string.h>
#include <s3c_uart.h>
#include <lcd.h>

static void mango_hw_init(void)
{
  mango_uart_init(1, 115200);
  mango_interrupt_init();
  mango_lcd_init();
}

int main()
{
  char ch;
  mango_hw_init();

  while(1){
    ch = getchar();
    if(ch == 'q') break;
  }

  return 0;
}

