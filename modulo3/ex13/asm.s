.section .data
	.global ptrvec
	.global num

.section .text
	.global keep_positives

keep_positives:
	cmpw $0, num(%rip)
	je end
	
	movl $0, %eax
	movswl num(%rip), %ecx
	movq ptrvec(%rip), %rdi
	
loop:
	cmpl $0, (%rdi)
	jge continue
	movl %eax, (%rdi)
	
continue:
	incl %eax
	cmpl num(%rip), %eax
	je end
	
	addq $4, %rdi
	jmp loop

end:
	ret
