.section .data
	.global ptr1
	.global ptr2
	.global num

.section .text
	.global swap

swap:
	cmpl $0, num(%rip)
	je end
	
	movl num(%rip), %ecx
	movq ptr1(%rip), %rsi
	movq ptr2(%rip), %rdi
	
loop:
	movb (%rsi), %dl
	movb (%rdi), %r12b
	movb %r12b, (%rsi)
	movb %dl, (%rdi)
	
	incq %rdi
	incq %rsi
	
	decl %ecx
	cmpl $0, %ecx
	jne loop

end:
	ret
