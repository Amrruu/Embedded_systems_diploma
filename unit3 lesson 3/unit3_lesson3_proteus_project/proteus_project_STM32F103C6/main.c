#include <stdio.h>

#define AB2ENR *((volatile unsigned int*)(0x40021000+0x18))
#define GPIOA_CRH (0x40010800+0x04)
#define GPIOA_ODR (0x40010800+0x0c)

typedef union {
	volatile unsigned int allbytes;
	struct{
		volatile unsigned int reserved:20;
		volatile unsigned int bit1:8;

	}Sgpioa_CRH;
}Ugpioa_CRH;

typedef union {
	volatile unsigned int allbytes;
	struct{
		volatile unsigned int reserved:13;
		volatile unsigned int PORTA:1;
	}Sgpioa_ODR;
}Ugpioa_ODR;

volatile Ugpioa_CRH* PTR_CRH=(volatile Ugpioa_CRH*)(GPIOA_CRH);
volatile Ugpioa_ODR* PTR_ODR=(volatile Ugpioa_ODR*)(GPIOA_ODR);
 
 unsigned char g_variables[3]={1,2,3};
 unsigned char const const_variables[3]={1,2,3};

int main(){
	AB2ENR |=1<<2;
	PTR_CRH->allbytes=1;
	PTR_CRH->Sgpioa_CRH.bit1=0x02;

	PTR_ODR->allbytes=0;
	while(1){
		int i = 0;
		for(i = 0 ; i<5000 ;i++);
		PTR_ODR->Sgpioa_ODR.PORTA=1;
		for(i = 0 ; i<5000 ;i++);
		PTR_ODR->Sgpioa_ODR.PORTA=0;
	}
	return 0;
}

