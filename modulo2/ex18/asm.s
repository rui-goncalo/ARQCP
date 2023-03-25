.section .data
	.global i
	.equ A, 2
	.equ B, 2

.section .text
	.global func

func:
	movq $0, %rdi
	movl i(%rip), %ecx

loop:
	movl %ecx, %eax
	imull %ecx, %eax
	movl $A, %ebx
	imull $A, %ebx
	
	imull %ebx, %eax
	cdq
	movl $B, %ebx
	idivl %ebx
	
	addl %eax, %edi
	
	incl %ecx
	cmpl $6, %ecx
	jl loop
	
	movl %edi, %eax

end:
	ret
