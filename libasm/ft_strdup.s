%include "linux64.inc"

global ft_strdup

extern __errno_location
extern malloc
extern ft_strlen
extern ft_strcpy

section .text

ft_strdup:
	push	r9
	push	rdi 	;save the string to duplicate
	call	ft_strlen
	add		rax, 1	; for the null character

	; allocate the necessary memory
	mov		rdi, rax
	call	malloc
	cmp		rax, 0
	je		err_case

	; copy the source string into the newly allocated memory
	pop		r9
	mov		rdi, rax
	mov		rsi, r9
	pop		r9
	call	ft_strcpy
	ret

err_case:
	pop		rdi
	pop		r9
	ret