#include <stdio.h>
#include <stdint.h>
extern int main();

void reset_handler () ;
void default_handler(void);
void NMI_handler() __attribute__((weak,alias("default_handler")));
void H_fault_handler() __attribute__((weak,alias("default_handler")));
void MM_fault_handler() __attribute__((weak,alias("default_handler")));
static unsigned int _stack_top[256];

void (*const g_p_fn_vectors[])() __attribute__((section(".vector")))={
	(void (*)()) ((unsigned long)_stack_top+sizeof(_stack_top)),
	reset_handler,
	NMI_handler,
	H_fault_handler,
	MM_fault_handler,
	
};

extern unsigned int _E_text;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;

void reset_handler () 
{
	int i;
	unsigned int DATA_size = (unsigned int*) &_E_DATA- (unsigned int*) &_S_DATA;
	unsigned int* P_src = (unsigned int*) &_E_text;
	unsigned int* P_dst = (unsigned int*) &_S_DATA;

	for (i= 0 ; i < DATA_size ; i++){
		*((unsigned char*) P_dst++)=*((unsigned char*)P_src++);
	}

	unsigned int BSS_size = (unsigned char*) &_E_BSS - (unsigned char*) &_S_BSS;
	 P_dst = (unsigned int*) &_S_BSS;
	for (i = 0 ; i < BSS_size ; i++){
		*((unsigned char*) P_dst++)=0x0;
	}
	main();
}
void default_handler(void){
	reset_handler();
}