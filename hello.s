%define		WRITE	1
%define		EXIT	60

%define		STD_OUT	1

%define		SUCCESS	0

section	.text
   global _start     ;must be declared for linker (ld)
   global _main
	
_start:	            ;tells linker entry point
	call	_main
	ret		

_main:
	mov		rax, WRITE
	mov 	rdi, STD_OUT
	lea		rsi, [rel hello.string]
	mov		rdx, hello.len
	syscall

	mov		rax, EXIT
	mov 	rdi, SUCCESS
	syscall

	ret		


section	.data
hello:
	.string db "Hello World!", 0xa ;string to be printed
	.len equ $ - hello.string     ;length of the string
