.section .data
	.global base
	.global height

.section .text
	.global getArea
	
getArea:
	movl base(%rip), %eax
	imull height(%rip), %eax
	
	movl $0, %edx
	movl $2, %ecx
	idivl %ecx
	
end:
	ret
