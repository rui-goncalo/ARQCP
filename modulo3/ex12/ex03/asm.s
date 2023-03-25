.section .data
    .global ptr1
    .global ptr2

.section .text
    .global str_copy_porto2

str_copy_porto2:
    movl $0, %eax
    movq ptr1(%rip), %rdi
    movq ptr2(%rip), %rsi

loop:
    movb (%rdi), %al

    cmpb $0, %al
    je end

    cmpb $118, %al
    je swap_VB_lower

    cmpb $86, %al
    je swap_VB_capital

    movb %al, (%rsi)
    jmp inc_ptrs

swap_VB_lower:
    movb $98, (%rsi)
    jmp inc_ptrs

swap_VB_capital:
    movb $66, (%rsi)

inc_ptrs:
    incq %rdi #estou a incrementar a posição do pointer. Cada pointer vale 8bytes. Mas como é um pointer de um char, usamos o inc
    incq %rsi
    jmp loop

end:
    movb %al, (%rsi) 
    ret
