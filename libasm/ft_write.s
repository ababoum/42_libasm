%include "linux64.inc"

global ft_write
extern __errno_location

section .text

ft_write:

	xor 	rax, rax
	mov		rax, SYS_WRITE
	syscall

	;check if the syscall returned an error
	cmp		rax, 0
	jl		set_errno
	ret

set_errno:
	neg		rax					;flip err number sign
	push	rax
	call	__errno_location 	;sets an int* that points on the variable Errno
	pop		r8
	mov		[rax], r8
	mov		rax, -1
	ret
