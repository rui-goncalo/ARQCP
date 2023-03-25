.section .data
	.global ptrvec
	.global num

.section .text
	.global vec_greater20

vec_greater20:
    cmpl $0, num(%rip)
    je return_null
    movl $0, %eax

    movl num(%rip), %edx    
    movq ptrvec(%rip), %rdi

my_loop:
    cmpq $20, (%rdi)
    jle increment_ptrvec

    incl %eax

increment_ptrvec:
    decl %edx
    cmpl $0, %edx
    je end 
    addq $8, %rdi
    jmp my_loop
	
return_null:
	movq $0, %rdi

end:
	ret
