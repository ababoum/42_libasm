%include "linux64.inc"

global ft_strcpy

section .text

ft_strcpy:

	mov		rcx, 0 ; counter
_copyLoop:
	mov		[rax + rcx], dil
	cmp		dil, 0
	jne		_increment
	ret

_increment:
	inc		rcx
	inc		rdi
	jmp		_copyLoop
