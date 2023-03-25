.section .data
	.global A
	.global B
	.global C
	.global D

.section .text
	.global compute
	
compute:
	movslq A(%rip), %rax
	movslq B(%rip), %rcx
	imulq %rcx

	movslq C(%rip), %rcx
	addq %rcx, %rax
	
	movslq D(%rip), %rcx
	cmpq $0, %rcx
	je return_zero
	
	#movq $0, %rdx
	idivq %rcx
	jmp end
	
return_zero:
	movq $0, %rax

end:
	ret
