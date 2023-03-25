.section .data
	.global ptrvec
	.global num

.section .text
	.global count_seq

count_seq:
	movl $0, %eax
	cmpl $3, num(%rip)
	jl end
	
	movl $0, %ecx
	movl $0, %edx
	movl num(%rip), %esi
	subl $2, %esi
	movq ptrvec(%rip), %rdi
	
loop:
	cmpl %esi, %ecx
	je end
	
	movslq %ecx, %rdx
	incl %ecx
	movl (%rdi, %rdx, 4), %r10d
	
	incq %rdx
	movl (%rdi, %rdx, 4), %r11d
	
	cmpl %r10d, %r11d
	jle loop
	
	incq %rdx
	movl (%rdi, %rdx, 4), %r12d
	
	cmpl %r10d, %r11d
	jle loop
	
	incl %eax
	jmp loop

end:
	ret
