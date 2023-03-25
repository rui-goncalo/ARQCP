.section .text
	.global count_even

count_even:
	movl $0, %eax
	pushq %rax

loop:
	cmpl $0, %esi
	je end
	
	movw (%rdi), %ax
	cdq
	movw $2, %cx
	idivw %cx, %ax
	
	addq $2, %rdi
	decl %esi
	
	cmpw $0, %dx
	jne loop
	
	popq %rax
	incl %eax
	pushq %rax
	jmp loop

end:
	popq %rax
	ret
