section .txt
	default rel
	extern printf
	global main
	bits 64
main:
	push rbp
	mov rdi, message
	mov rax, 0
	call printf wrt ..plt 
	pop rbp
	mov rax,0        
	ret

section .data
	message: db `Hello, Holberton\n`,0

