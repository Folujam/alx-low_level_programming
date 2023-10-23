section .data
	hello db 'Hello, Holberton', 10
section .text
	global main
	extern printf
main:
	lea rdi, [rel hello]
	xor rax, rax
	call printf
