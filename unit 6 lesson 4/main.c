typedef volatile unsigned int vuint32_t ;
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define GPIOA_BASE (0x40010800)
#define GPIOA_CRH *(volatile uint32_t*)(GPIOA_BASE + 0x04)
#define GPIOA_ODR *(volatile uint32_t*)(GPIOA_BASE + 0x0C)
#define GPIOA_CRL *(volatile uint32_t*)(GPIOA_BASE + 0x00)


//CLOCK REGISTERS
#define RCC_BASE (0x40021000)
#define RCC_ABP2ENR *(volatile uint32_t*)(RCC_BASE + 0x18)


//AFIO REGISTERS
#define AFIO_BASE (0x40010000)
#define AFIO_EXTICR1 *(volatile uint32_t*)(AFIO_BASE+0x08)


//EXTI REGISTERS
#define EXTI_BASE (x40010400)
#define EXTI_IMR *(volatile uint32_t*)(EXTI_BASE+0x00)
#define EXTI_EMR *(volatile uint32_t*)(EXTI_BASE+0x04)
#define EXTI_RTSR *(volatile uint32_t*)(EXTI_BASE+0x08)
#define EXTI_FTSR *(volatile uint32_t*)(EXTI_BASE+0x0c)
#define EXTI_SWIER *(volatile uint32_t*)(EXTI_BASE+0x10)
#define EXTI_PR *(volatile uint32_t*)(EXTI_BASE+0x14)

#define NVIC_ISER0 *(volatile uint32_t*)(0xE000E100)

void clock_INIT(){
RCC_ABP2ENR |= (0b101<<0);

}


void AFIO_INIT(){
  AFIO_EXTICR1 |= (0<<0);
}

void GPIO_INIT(){
GPIOA_CRH |= (1<<21);
GPIOA_CRL |= (1<<0);
}

void EXTI_INIT(){
  EXTI_IMR |=(1<<0);
  EXTI_RTSR |=(1<<0);
}

void EXTI0_IRQHandler(void){
GPIOA_ODR ^= (1>>13);
  EXTI_PR |= (1<<0);
}

void NVIC_INIT(){
NVIC_ISER0 |= (1<<6);

}

void main(){
  clock_INIT();
  AFIO_INIT();
  GPIO_INIT();
  EXTI_INIT();
  while(1);
}


