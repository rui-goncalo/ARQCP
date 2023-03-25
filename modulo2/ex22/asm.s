.section .data
	.global i
	.global j

.section .text
	.global f
	.global f2
	.global f3
	.global f4

f:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	cmp %eax, %ecx
	je f_1
	addl %ecx, %eax
	subl $-1, %eax
	jmp end
	
f_1:
	subl %ecx, %eax
	addl $1, %eax
	jmp end
	
f2:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	cmp %ecx, %eax
	jg f2_2
	addl $1, %ecx
	imul %ecx, %eax
	jmp end

f2_2:
	subl $1, %eax
	imul %ecx, %eax
	jmp end
	
f3:
	movl i(%rip), %eax
	movl j(%rip), %ecx
	cmp %ecx, %eax
	jge f3_3
	jmp end
	
f3_3:
	imul %ecx, %eax
	movl %eax, %ebx
	movl i(%rip), %eax
	addl $1, %eax
	cdq
	
	idivl %ebx
	jmp end

end:
	ret
