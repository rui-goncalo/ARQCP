.section .data
	.global x

.section .text
	.global sum_n
	
sum_n:
	cmpl $0, %edi
	jle return_zero

	movl $1, %eax
	movl $1, %edx
	
sum_n_loop:
	cmpl %edi, %edx
	je end
	
	incl %edx
	addl %edx, %eax
	jmp sum_n_loop
	
return_zero:
	movl $0, %eax

end:	
	ret
