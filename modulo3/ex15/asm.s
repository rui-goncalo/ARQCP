.section .data
	.global ptrvec
	.global num

.section .text
	.global sum_first_byte

sum_first_byte:
	movl $0, %eax
	cmpl $0, num(%rip)
	je end
	
	movl num(%rip), %ecx
	movq ptrvec(%rip), %rdi
	
loop:
	movsbl (%rdi), %edx
	addl %edx, %eax
	
	addq $4, %rdi
	
	decl %ecx
	cmpl $0, %ecx
	jne loop

end:
	ret
