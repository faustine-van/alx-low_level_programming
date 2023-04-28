; purpose:  print Hello, Holberton using printf
; input:    str[] = hello, Holberton
; run:      nasm -f elf64 101-hello_holberton.asm &&
;          gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
; output:   Hello, Holberton

; declare needed printf
	extern  printf		; function to be called

	section .data		; data section initialize variable
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0		; printf fornat, new line , '0'

	section .text		; code section

	global main
main:				; entry point
	push	rbp		; setup stack frame

	mov	rdi,fmt
	mov 	rsi,msg
	mov 	rax,0
	call 	printf		; call c function
	pop	rbp		; restore stack
	mov	rax,0
	ret			; return
