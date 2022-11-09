%include "linux64.inc"

global ft_strcpy

section .text

ft_strcpy:

	mov		rcx, 0 			;counter
_copyLoop:
	mov		[rdi + rcx] , sil
	cmp		BYTE [rsi] , 0
	jne		_increment
	ret

_increment:
	inc		rcx
	inc		rsi
	jmp		_copyLoop
