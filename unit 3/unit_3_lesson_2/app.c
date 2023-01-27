#include <stdio.h>
#include "uart.h"
  unsigned char arr[100]="learn-in-depth_amr";
  unsigned char const arr2[100]="learn-in-depth_amr2";

void main(){
  send_string(arr);
  
  }