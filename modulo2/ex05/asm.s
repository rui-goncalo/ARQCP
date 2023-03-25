.section .data
	.global s

.section .text
	.global swapBytes
	
swapBytes:
	movw s(%rip), %ax
	movb %ah, %ch
	movb %al, %ah
	movb %ch, %al
	
end:
	ret
