.section .text
	.global calc

calc:
	movl %esi, %ecx
	subl %edi, %ecx
	imull %edx, %ecx
	subl $2, %ecx
	movl %ecx, %eax

end:
	ret
