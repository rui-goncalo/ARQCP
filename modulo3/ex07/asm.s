.section .data
    .global ptr1

.section .text
    .global decrypt
    .global encrypt

decrypt:
	movl $0, %eax
	movl $0, %ecx
    movq ptr1(%rip), %rdi

my_loop:
    movb (%rdi), %cl
    cmpb $0, %cl
    je end

    cmpb $32, %cl
    je inc_ptr1

    cmpb $97, %cl
    je inc_ptr1

    subb $2, %cl
    movb %cl, (%rdi)
    incl %eax

inc_ptr1:
	incq %rdi
	jmp my_loop

end:
    ret
