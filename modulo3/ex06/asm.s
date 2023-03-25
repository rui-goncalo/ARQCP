.section .data
	.global ptr1

.section .text
	.global encrypt
	
encrypt:
	movl $0, %eax
	movl $0, %ecx
	movq ptr1(%rip), %rdi
	
loop:
	movb (%rdi), %cl
	
	cmpb $0, %cl
	je end
	
	cmpb $32, %cl
	je inc_ptr
	
	cmpb $97, %cl
	je inc_ptr
	
	addb $2, %cl
	movb %cl, (%rdi)
	incl %eax
	
inc_ptr:
	incq %rdi
	jmp loop
	
end:
	ret
