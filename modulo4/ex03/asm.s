.section .data
	.global x

.section .text
	.global greatest

swap_1:
	movl %esi, %eax
	jmp continue

swap_2:
	movl %edx, %eax
	jmp end

greatest:
	movl %edi, %eax
	
	cmpl %esi, %eax
	jl swap_1

continue:
	cmpl %edx, %eax
	jl swap_2

end:	
	ret
