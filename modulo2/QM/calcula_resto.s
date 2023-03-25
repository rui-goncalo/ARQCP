.section .data
	.global numero_atual
	numero_atual: .short 0

.section .text
	.global calcula_resto

calcula_resto:
	movq $0, %rdi
	movw numero_atual(%rip), %ax
	movw $10, %cx
	
loop:
	movw $0, %dx
	idivw %cx
	addw %dx, %di
	
	cmpw $10, %ax
	jg loop
	
	addw %di, %ax
	cmpw $9, %ax
	jg second_loop
	jmp end
	
second_loop:
	movw $0, %di
	jmp loop

end:
	ret
