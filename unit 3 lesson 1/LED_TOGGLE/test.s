	.file	"test.c"
	.section .rdata,"dr"
LC0:
	.ascii "test2\0"
	.text
	.p2align 4,,15
	.globl	_af
	.def	_af;	.scl	2;	.type	32;	.endef
_af:
LFB12:
	.cfi_startproc
	movl	$LC0, 4(%esp)
	jmp	_printf
	.cfi_endproc
LFE12:
	.section .rdata,"dr"
LC1:
	.ascii "test3\0"
	.text
	.p2align 4,,15
	.globl	_bf
	.def	_bf;	.scl	2;	.type	32;	.endef
_bf:
LFB13:
	.cfi_startproc
	movl	$LC1, 4(%esp)
	jmp	_printf
	.cfi_endproc
LFE13:
	.p2align 4,,15
	.globl	_z
	.def	_z;	.scl	2;	.type	32;	.endef
_z:
LFB14:
	.cfi_startproc
	subl	$28, %esp
	.cfi_def_cfa_offset 32
	movl	$LC0, (%esp)
	call	_printf
	movl	$LC1, 32(%esp)
	addl	$28, %esp
	.cfi_def_cfa_offset 4
	jmp	_printf
	.cfi_endproc
LFE14:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section	.text.startup,"x"
	.p2align 4,,15
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB15:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	movl	$LC1, (%esp)
	call	_printf
	xorl	%eax, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
