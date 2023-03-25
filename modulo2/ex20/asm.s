.section .data
	.global num

.section .text
	.global check_num
	
check_num:
	movslq num(%rip), %rax
	movq $2, %rcx
	
	cmpq $0, %rax
	jl negative
	
	movq $0, %rdx
	idivq %rcx
	
	cmpq $0, %rdx
	je return_three
	movq $4, %rax
	jmp end

return_one:
	movq $1, %rax
	jmp end

return_three:
	movq $3, %rax
	jmp end
	
negative:
	movq $-1, %rdx
	idivq %rcx
	
	cmpq $0, %rdx
	je return_one
	movq $2, %rax
	jmp end

end:
	ret
