	bits 64
	global main

	section .txt
main:
    extern printf
    mov rdi, str
    mov al,0
    call printf
ret
str:
    db `Hello, Holberton\n`,0
