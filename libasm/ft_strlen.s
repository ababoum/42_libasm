%include "linux64.inc"

section .text
	global ft_strlen


ft_strlen:
	
	pop		rax		; retrieve the argument
	mov		rbx, 0	; counter

_countLoop:
	mov		cl, [rax]	; test the string's first byte
	cmp 	cl, 0
	jne		_increment

	; end of loop
	push	rbx
	ret

_increment:
	inc		rax
	inc		rbx
	jmp		_countLoop

