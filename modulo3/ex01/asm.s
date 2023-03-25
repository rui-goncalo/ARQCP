.section .data
    .global ptr1

.section .text
    .global zero_count

zero_count:
    movl $0, %eax
    movl $0, %ebx
    movq ptr1(%rip), %rdi 

    compare_letters:
        movb (%rdi), %bl
        incq %rdi

        cmpb $0, %bl # se estamos no fim da string
        je end # se for igual a zero salta

        cmpb $48, %bl
        jne compare_letters
        incl %eax
        jmp compare_letters
        
end:
    ret
        