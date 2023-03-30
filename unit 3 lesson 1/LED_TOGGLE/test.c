#include <stdio.h>
#include "Assignment_unit3_lesson1.h"

typedef AB2ENR *((vint_32t*)(0x40021000+0x18));
typedef GPIOA_CRH (0x40010800+0x04);
typedef GPIOA_ODR (0x40010800+0x0c);

typedef union {
  vuint_8t allbytes; 
  struct{
    vuint_8t bit1:1;
    vuint_8t bit2:1;
    vuint_8t bit3:1;
    vuint_8t bit4:1;

  }Sgpioa_CRH;
}Ugpioa_CRH;

typedef union {
  vint_64t allbytes; 
  struct{
    vint_32t reserved:12;
    vuint_8t PORTA:1;
  }Sgpioa_ODR;
}Ugpioa_ODR;

volatile Ugpioa_CRH* PTR_CRH=(volatile Ugpioa_CRH*)(GPIOA_CRH);
volatile Ugpioa_ODR* PTR_ODR=(volatile Ugpioa_ODR*)(GPIOA_ODR);


int main(){
AB2ENR !=1<<2;

PTR_CRH->allbytes=0;
PTR_CRH->sgpioa_ODR.bit2=1;
PTR_ODR->allbytes=0;
while(1){
for(int i = 0 ; i<5000 ;i++)
PTR_PORTA=1;
for(int i = 0 ; i<5000 ;i++)
PTR_PORTA=0;}
  return 0;
}
