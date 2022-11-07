%define		READ	0
%define		WRITE	1
%define		EXIT	60

%define		STD_IN	0
%define		STD_OUT	1

%define		SUCCESS	0
%define		FAILURE 1

section	.text
   global _start     ;must be declared for linker (ld)
   global _main
	
_start:	            ;tells linker entry point
	call	_main
	ret		


_printText1:
	mov		rax, WRITE
	mov 	rdi, STD_OUT
	mov		rsi, hello.string1
	mov		rdx, hello.len1
	syscall
	ret

_printText2:
	mov		rax, WRITE
	mov 	rdi, STD_OUT
	mov		rsi, hello.string2
	mov		rdx, hello.len2
	syscall
	ret

_printName:
	mov		rax, WRITE
	mov 	rdi, STD_OUT
	mov		rsi, name
	mov		rdx, 16
	syscall
	ret

_getName:
	mov		rax, READ
	mov		rdi, STD_IN
	mov		rsi, name
	mov		rdx, 16
	syscall
	ret

_main:
	
	call	_printText1
	call	_getName
	call	_printText2
	call	_printName
	mov		rax, EXIT
	mov 	rdi, SUCCESS
	syscall


section .bss
	name resb 16

section	.data
hello:
	.string1 db "What is your name?", 10 ;string to be printed
	.len1 equ $ - hello.string1     ;length of the string
	.string2 db "Hello, "
	.len2 equ $ - hello.string2
