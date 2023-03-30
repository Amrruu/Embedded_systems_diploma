/* linker script cortexM3
Eng: AMR
*/


MEMORY 
{
flash(RX) : ORIGIN = 0x0000000, LENGTH = 512M
sram(RWX) : ORIGIN = 0x2000000, LENGTH = 512M
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
	_E_BSS = . ;
	
	}> sram
}