.section .text
	.global calculate

calculate:
	movl %edi, %edx
	addl %esi, %edx
	
	movl %edi, %ecx
	imull %esi, %ecx
	
	subl %ecx, %edx
	movl %edx, %eax

end:
	ret
