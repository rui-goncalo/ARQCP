.section .data
	.global ptrvec
	.global x
	.global num

.section .text
	.global vec_search

vec_search:

    movl num(%rip), %edx
    cmpl $0, %edx
    je return_null
    
    movw x(%rip), %cx
    movq ptrvec(%rip), %rax

my_loop:
    cmpw %cx, (%rax)
    je end

    subl $1, %edx
    cmpl $0, %edx
    je return_null

    addq $2, %rax
    jmp my_loop
	
return_null:
	movq $0, %rax

end:
	ret
