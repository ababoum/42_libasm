%include "linux64.inc"

section .data
	text db "Hello World!", 10, 0

section .text
	global _start


_start:
	mov		rax, text
	call	_print
	exit	SUCCESS

; input: rax as pointer to string
; output: print string at rax
_print:
	push	rax ; save the value for later
	mov 	rbx, 0 ; counter for string length
	call	_printLoop

	pop		rcx
	mov		rax, SYS_WRITE
	mov		rdi, STD_OUT
	mov		rsi, rcx
	mov		rdx, rbx
	syscall
	ret

_printLoop:
	inc		rax
	inc		rbx
	mov		cl, [rax]
	cmp 	cl, 0
	jne		_printLoop
	ret
