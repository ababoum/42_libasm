%include "linux64.inc"

section	.data
	NEWLINE	db 10

section	.bss
	argc	resb	100

section .text
	global _start

_start:
	pop		rax
	mov		[argc], rax
	pop		rax ;get rid of *path

_argLoop:
	mov		rbx, [argc]
	dec		rbx
	mov		[argc], rbx

	cmp		rbx, 0
	je		_endLoop

	pop		rax
	putstr	rax
	putstr	NEWLINE
	jmp		_argLoop
_endLoop:
	exit	SUCCESS