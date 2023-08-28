/**
 * print_assembly - prints in assempbly language
 * Return: void (success)
 */
	
	; Declare needed c function

		SECTION .data		; data section, initialised variables
	msg:	db "Hello, Holberton", 0; c string null
	fmt:	db "%s", 10, 0		; printf format, "\n", '0'

		SECTION .text		; code section
		extern printf		; c function call
		global main		; standard gcc entry point

	main
		push	rbp		; align stack frame set up

		mov	rdi, fmt	; move fmt (variable) address fmt into the register
		mov rsi, msg
		mov rax, 0		; optional for xor rax, rax
		call	printf		; call c function

		pop	rbp		; restore default stack

		mov	rax, 0		; normal, no error, return value
		ret			; return
