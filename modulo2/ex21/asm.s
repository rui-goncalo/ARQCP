.section .data
	.global code
	.global currentSalary

.section .text
	.global new_salary
	
new_salary:
	movl currentSalary(%rip), %eax
	cmp $10, code(%rip)
	je code_10
	cmp $11, code(%rip)
	je code_11
	cmp $12, code(%rip)
	je code_12
	addl $100, %eax
	jmp end
	
code_10:
	addl $300, %eax
	jmp end
	
code_11:
	addl $250, %eax
	jmp end
	
code_12:
	addl $150, %eax
	jmp end

end:
	ret
