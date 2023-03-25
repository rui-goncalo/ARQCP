.section .data
	.global ptr1
	.global ptr2
	.global ptr3

.section .text
	.global str_cat

str_cat:
	movq ptr1(%rip), %rdi
	movq ptr2(%rip), %rsi
	movq ptr3(%rip), %rdx

loop_1:
	movb (%rdi), %cl
	
	cmpb $0, %cl
	je loop_2
	
	movb %cl, (%rdx)
	incq %rdi
	incq %rdx
	jmp loop_1
	
loop_2:
	movb (%rsi), %cl
	movb %cl, (%rdx)
	
	cmpb $0, %cl
	je end
	
	incq %rsi
	incq %rdx
	jmp loop_1

end:
	
	ret
