.section .text
	.global test_equal

test_equal:
	movl $1, %eax

loop:
	cmpb $0, (%rdi)
	je check_end

	movb (%rdi), %dl
	cmpb %dl, (%rsi)
	jne return_zero
	
	incq %rdi
	incq %rsi
	
	jmp loop

check_end:
	cmpb $0, (%rsi)
	jne return_zero
	movl $1, %eax
	jmp end

return_zero:
	movl $0, %eax

end:
	ret
