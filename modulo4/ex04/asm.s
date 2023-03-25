.section .text
	.global sum_smaller

sum_smaller:

	movl %edi, %eax
	addl %esi, %eax
	
	cmp %edi, %esi
	jl return_other
	movl %edi, (%rdx)
	jmp end
	
return_other:
	movl %esi, (%rdx)

end:	
	ret
