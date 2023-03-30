/* linker script cortexM3
Eng: AMR
*/


MEMORY 
{
flash(RX) : ORIGIN = 0x8000000, LENGTH = 128k
sram(RWX) : ORIGIN = 0x2000000, LENGTH = 20k
}

SECTIONS 
{
	.text : {
		*(.vector*)
		*(.text*)
		*(.rodata*)
	}> flash
	.data : {
		*(.data)
	}> flash
}