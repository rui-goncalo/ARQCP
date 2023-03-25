.section .data
	.global ptrvec
	.global num

.section .text
	.global vec_zero

vec_zero:
	movl $0, %eax
	cmpl $0, num(%rip)
	je end
	
	movl num(%rip), %edx
	movq ptrvec(%rip), %rdi
	
loop:
	cmpw $100, (%rdi)
	jl continue
	incb %al
	movw $0, (%rdi)
	
continue:
	decl %edx
	cmpl $0, %edx
	je end
	
	addq $2, %rdi
	jmp loop

end:
	ret
