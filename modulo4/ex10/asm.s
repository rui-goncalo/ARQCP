.section .text
	.global incr
	.global call_incr

.section .data
	x1: .short 0xA1B2

incr:
	movswl (%rdi), %edx
	
	movl %esi, %ecx
	addl %edx, %ecx
	
	movl %ecx, (%rdi)
	
	movl %edx, %eax
	jmp end
	
call_incr:
	leaq x1(%rip), %rdi
	movq $0xC3, %rsi
	
	call incr
	
	addl x1(%rip), %eax

end:
	ret
