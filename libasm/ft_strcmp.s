%include "linux64.inc"

global ft_strcmp

section .text

ft_strcmp:
	xor		rcx, rcx			; prepare rcx to store index


compare_loop:
	mov		r8b, BYTE [rdi + rcx]	; store byte from s1
	mov		r9b, BYTE [rsi + rcx]	; store byte from s2
	cmp		r8b, r9b
	jne		exit_block
	cmp		r8b, 0
	je		exit_block
	cmp		r9b, 0
	je		exit_block
	inc		rcx
	jmp		compare_loop

exit_block:
	xor		rax, rax
	movzx	rax, r8b	;moves the content of the char to a full register with a 0-extend
	movzx	r15, r9b	;same
	sub		rax, r15	
	ret