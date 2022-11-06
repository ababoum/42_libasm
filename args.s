%include "linux64.inc"


section .text
	global _start

section	.bss
	argc	resb	100

_start:

	pop		[argc]

_argLoop:
	dec		[argc]
	cmp		[argc], 0
	je		_endLoop

	pop		rax
	putstr	rax
	jump	_argLoop
_endLoop:
	exit	SUCCESS