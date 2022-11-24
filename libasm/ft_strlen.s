%include "linux64.inc"

global ft_strlen

section .text

ft_strlen:
	mov		rax, 0
	
_countLoop:
	cmp 	BYTE [rdi + rax], 0
	jne		_increment
	; end of loop
	ret

_increment:
	inc		rax
	jmp		_countLoop
