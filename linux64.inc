%define		SYS_READ	0
%define		SYS_WRITE	1
%define		SYS_EXIT	60

%define		STD_IN		0
%define		STD_OUT		1
%define		STD_ERR		2

%define		SUCCESS		0
%define		FAILURE 	1

%macro		exit 1
	mov rax, SYS_EXIT
	mov rdi, %1
	syscall
%endmacro

; print a null-terminated string to standard output
%macro		putstr 1
	; input: rax as pointer to string
	; output: print string at rax
	mov		rax, %1
	mov		rbx, 0
%%print:
	push	rax ; save the value for the print
	mov 	rbx, 0 ; counter for string length

%%printLoop:
	inc		rax
	inc		rbx
	mov		cl, [rax]
	cmp 	cl, 0
	jne		%%printLoop

%%endLoop:
	pop		rcx ; retrieve the value to be printed
	mov		rax, SYS_WRITE
	mov		rdi, STD_OUT
	mov		rsi, rcx
	mov		rdx, rbx
	syscall
%endmacro


; print a number to the standard output
section .bss
	digitSpace		resb 100 ;used to store the number to be printed
	digitSpacePos	resb 8 ; used to follow the cursor over the number being printed

%macro	putnbr 1
	mov		rax, %1

%%printNumber:
	mov		rcx, digitSpace
	mov		rbx, 10		; used for the division
	mov 	[rcx], rbx
	inc		rcx
	mov		[digitSpacePos], rcx

%%printRAXLoop: ;storing the digits 1 by 1
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
	jne		%%printRAXLoop


%%printRAXLoop2: ;printing the digits stored 1 by 1
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
	jge		%%printRAXLoop2
%endmacro