.section .data
	.global ptr1

.section .text
	.global str_copy_porto
	
str_copy_porto:
	movl $0, %eax
	movl $0, %ecx
	movq ptr1(%rip), %rdi
	movq ptr2(%rip), %rsi
	
loop:
	movb (%rdi), %al
	
	cmpb $0, %al
	je end
	
	cmpb $118, %al
	je swap_v_b
	
	movb %al, (%rsi)
	jmp inc_ptr

swap_v_b:
	movb $98, (%rsi)
	
inc_ptr:
	incq %rdi
	incq %rsi
	jmp loop
	
end:
	movb %al, (%rsi)
	ret
