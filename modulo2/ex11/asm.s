.section .data
	.global op1
	.global op2

.section .text
	.global test_flags
	
test_flags:
	movl op1(%rip), %eax
	addl op2(%rip), %eax
	jo jump_overflow_carry
	jc jump_overflow_carry
	movl $0, %eax
	jmp end
	
jump_overflow_carry:
	movl $1, %eax
	
end:
	ret
