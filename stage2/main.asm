.intel_syntax noprefix
.code16

.section .text
.global _start

_start:
	mov al, 'A'
	mov ah, 0x0E
	int 0x10

	cli
	hlt
