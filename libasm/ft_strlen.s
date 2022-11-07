%include "linux64.inc"

global ft_strlen

section .text


ft_strlen:
	mov		rdi, 0		; counter set to 0

_countLoop:
	mov		cl, [rax]	; test the string's first byte
	cmp 	cl, 0
	jne		_increment
	; end of loop
	mov		rax, rdi
	ret

_increment:
	inc		rax
	inc		rdi
	jmp		_countLoop
