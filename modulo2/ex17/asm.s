.section .data
	.global num1
	.global num2

.section .text
	.global sum
	.global subtraction
	.global multiplication
	.global division
	.global modulus
	.global pow2
	.global pow3
	
sum:
	movl num1(%rip), %eax
	addl num2(%rip), %eax
	jmp end
	
subtraction:
	movl num1(%rip), %eax
	subl num2(%rip), %eax
	jmp end

multiplication:
	movl num1(%rip), %eax
	imull num2(%rip), %eax
	jmp end
	
division:
	movl num1(%rip), %eax
	cdq
	movl num2(%rip), %ecx
	idivl %ecx
	jmp end
	
modulus:
	movl $0, %edx
	movl num1(%rip), %eax
	movl $1, %ecx
	div %ecx
	jmp end
	
pow2:
	movl num1(%rip), %eax
	imull %eax, %eax
	jmp end
	
pow3:
	movl num1(%rip), %eax
	imull num1(%rip), %eax
	imull num1(%rip), %eax
	jmp end

end:
	ret
