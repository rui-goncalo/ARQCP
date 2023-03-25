.section .data
	.global potencia
	.global horas
	.global id
	
	.global id_max_consumo
	id_max_consumo: .byte 0

.section .text
	.global consumo

consumo:
	movl $0, %eax               # clears %eax
	movl $0, %ecx               # clears %ecx
	movb potencia(%rip), %al    # places the value of "potencia" on %al
	movb horas(%rip), %cl       # places the value of "horas" on %cl
	mulb %cl                    # multiples %cl with %al and stores the result in %ax
	
	movl $0, %edx               # clears %edx in preperation for the division
	movw $1000, %cx             # places the value of the divisor (1000) on %cx
	divw %cx                    # devides %al with %cx and stores the result in %al

end:
	ret
