.section .data
	.global op1
	.global op2
	.global res

.section .text
.global sum

sum:
	movl op1(%rip), %ecx  # place op1 in ecx
	movl op2(%rip), %eax  # place op2 in eax
	addl %ecx, %eax       # adds ecx to eax. Result stored in eax
	movl %eax, res(%rip)  # copy the result to res
	
ret
