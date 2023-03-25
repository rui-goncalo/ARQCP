.section .data
	.global current
	.global desired

.section .text
	.global needed_time
	
needed_time:
	movswq current(%rip), %rcx
	movswq desired(%rip), %rax
	subq %rcx, %rax

	cmpq $0, %rax
	je return_zero
	jg increase
	jl decrease

increase:
	imulq $120, %rax
	jmp end
	
decrease:
	imulq $-180, %rax
	jmp end
	
return_zero:
	movq $0, %rax

end:
	ret
