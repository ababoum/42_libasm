%include "linux64.inc"

section .bss
	digitSpace		resb 100
	digitSpacePos	resb 8

section .text
	global _start


_start:
	mov		rax, 123
	call 	_printRAX

	exit	SUCCESS


_printRAX:
	mov		rcx, digitSpace
	mov		rbx, 10
	mov 	[rcx], rbx
	inc		rcx
	mov		[digitSpacePos], rcx

_printRAXLoop: ;storing the digits 1 by 1
	mov 	rdx, 0 ; this is useful to execute a division normally
	mov		rbx, 10
	div		rbx
	push	rax
	add		rdx, 48 ; rdx contains the remainder of the division of rax by rbx

	mov 	rcx, [digitSpacePos]
	mov		[rcx],	dl
	inc 	rcx
	mov 	[digitSpacePos], rcx

	pop		rax
	cmp		rax, 0
	jne		_printRAXLoop


_printRAXLoop2: ;printing the digits stored 1 by 1
	mov		rcx, [digitSpacePos]

	mov		rax, SYS_WRITE
	mov		rdi, STD_OUT
	mov 	rsi, rcx
	mov		rdx, 1
	syscall

	mov		rcx, [digitSpacePos]
	dec 	rcx
	mov 	[digitSpacePos], rcx

	cmp		rcx, digitSpace ;initial pointer to the number
	jge		_printRAXLoop2

	ret