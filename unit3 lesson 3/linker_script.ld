/* linker script cortexM3
Eng: AMR
*/


MEMORY 
{
flash(RX) : ORIGIN = 0x8000000, LENGTH = 128k
sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20k
}

SECTIONS 
{
	.text : {
		*(.vector*)
		*(.text*)
		*(.rodata*)
		. = ALIGN(4);
	_E_text = . ;
	}> flash
	.data : {
	_S_DATA = . ;
		*(.data)
	. = ALIGN(4);
	_E_DATA = . ;
	}>  sram AT> flash
	.bss : {
	_S_BSS = . ;
		*(.bss)
	. = ALIGN(4);
	_E_BSS = . ;
	. = . + 0x1000;
	_stack_point = .;
	}> sram
}