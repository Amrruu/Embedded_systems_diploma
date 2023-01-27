#include <stdio.h>
#include "uart.h"

void send_string(unsigned char* STR){
  while(*STR !='\0'){
  volatile unsigned int* uartdb=(volatile unsigned int*)0x101f1000;
  *uartdb=(unsigned int)*STR;
  STR++;
  }
}
