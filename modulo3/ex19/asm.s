.section .data
	.global ptrgrades
	.global ptrfreq
	.global num

.section .text
	.global frequencies

frequencies:
	cmpl $0, num(%rip)
	je end
	
	movl num(%rip), %ecx
	movl $0, %edx
	movq ptrgrades(%rip), %rsi
	movq ptrfreq(%rip), %rdi
	
loop:
	movsbq (%rsi), %rax
	movl (%rdi, %rax, 4), %edx
	incl %edx
	movl %edx, (%rdi, %rax, 4)
	
	incq %rsi
	decl %ecx
	cmpl $0, %ecx
	jne loop

end:
	ret
