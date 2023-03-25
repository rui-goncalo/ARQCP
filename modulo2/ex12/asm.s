.section .data
    .global A
    .global B

.section .text
    .global isMultiple

isMultiple: 
    cmpl $0, A(%rip)
    je isZero
    #cmpl $0, B(%rip)
    #je isZero
    movslq A(%rip), %rax
    cdq
    movslq B(%rip), %rcx
    idivl %ecx

    cmpl $0, %edx
    je isDivisible
    movl $0, %eax
    jmp end

isDivisible:
    movl $1, %eax
    jmp end

isZero:
    movl $0, %eax

end: 
    ret
