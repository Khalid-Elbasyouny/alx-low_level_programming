section		.text
	extern	printf
	global	main
main:
	mov		edi, pop_up
	mov		eax, 0
	call	printf

section		.data
	pop_up db 'Hello, Holberton', 0xa, 0
