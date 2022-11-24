%include "linux64.inc"

global ft_strcpy

section .text

ft_strcpy:
	push	rcx
	push	r8
	xor		rcx, rcx			;counter
_copyLoop:
	mov		r8b, BYTE [rsi + rcx]	; save 1 byte from src
	mov		[rdi + rcx], r8b	; save 1 byte from src
	cmp		r8b, 0
	jne		_increment
	mov		rax, rdi			; move DEST to return slot
	pop		r8
	pop		rcx
	ret

_increment:
	inc		rcx
	jmp		_copyLoop
