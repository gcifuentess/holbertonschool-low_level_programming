;;  ----------------------------------------------------------------------------------------
;;  Writes "Hello, Holberton" to the console using only system calls. Runs on 64-bit Linux only.
;;  To assemble and run:
;;
;;      nasm -f elf64 100-hello_holberton.asm && gcc 100-hello_holberton.o -o hello
;;  ----------------------------------------------------------------------------------

		global	main

		section	.text
main:						; This is called by the C library startup code
		mov     rax, 1				; system call for write
		mov     rdi, 1		; file handle 1 is stdout
		mov  	rsi, message	; address of string to output
		mov 	rdx, 17		; number of bytes
		syscall			; invoke operating system to do the write

		ret

message:
		db	"Hello, Holberton", 10 	; Note strings must be terminated with 0 in C
	
