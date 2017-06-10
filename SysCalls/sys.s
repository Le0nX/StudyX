.intel_syntax noprefix
.section .data

msg:
	.ascii "TEST \n"
	len = . - msg

.section .text
.global _start

_start:
	mov eax, 4 #write()
	mov ebx, 1
	mov ecx, OFFSET FLAT:msg
	mov edx, len
	
	int 0x80
	
	mov eax, 1
	xor ebx, ebx
	int 0x80
