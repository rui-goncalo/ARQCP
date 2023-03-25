.section .data
	.global op1
	.global op2
	
	.global op3
	op3: .long -6
	
	.global op4
	op4: .long 1

.section .text
	.global sum_v3
	
sum_v3:
	movslq op4(%rip), %rax
	movslq op3(%rip), %rcx
	addq %rcx, %rax
	movslq op2(%rip), %rcx
	subq %rcx, %rax
	movslq op1(%rip), %rcx
	addq %rcx, %rax
	
end:
	ret
