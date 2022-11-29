	bits 64
	global main
	extern printf

	section .txt
main:
    mov rdi, str
    mov al,0
    call printf
ret

str:
     db `Hello, Holberton\n`,0
