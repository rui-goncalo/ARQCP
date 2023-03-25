.section .data
	.global base
	base: .int 6
	
	.global height
	height: .int 6

.section .text
    .global getArea

getArea:
	movl base(%rip), %eax
	imull height(%rip), %eax
	
	movl $0, %edx
	movl $2, %ecx
	idivl %ecx

ret
