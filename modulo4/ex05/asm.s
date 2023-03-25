.section .text
	.global inc_and_square

inc_and_square:
	addl $1, (%rdi)
	movl %esi, %eax
	imull %esi, %eax

end:	
	ret
