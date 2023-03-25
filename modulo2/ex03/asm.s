.section .data
	.global op1
	.global op2
	.equ CONST,15

.section .text
	.global sum
	.global sum_v2

sum:
	movl op1(%rip), %ecx  #place op1 in ecx
	movl op2(%rip), %eax  #place op2 in eax
	addl %ecx, %eax       #adds ecx to eax. Result stored in eax
	jmp end

sum_v2:
	movl op1(%rip), %ecx
	subl $CONST, %ecx
	movl op2(%rip), %eax
	subl $CONST, %eax
	subl %ecx, %eax
	
end:
	ret
