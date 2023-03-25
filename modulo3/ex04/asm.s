.section .data
	.global num
	.global ptrvec

.section .text
	.global vec_add_one
	
vec_add_one:
	movl num(%rip), %eax
	movq ptrvec(%rip), %rdi
	
	cmpl $0, %eax
	je end
	
loop:
	movq (%rdi), %rcx
	addq $1, %rcx
	movq %rcx, (%rdi)
	
	addq $8, %rdi
	decl %eax
	cmpl $0, %eax
	jne loop
	
end:
	ret
