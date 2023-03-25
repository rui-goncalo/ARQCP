.section .data
    .global num 

.section .text
    .global steps

steps:
    movl num(%rip), %eax
    imull $3, %eax

    addl $6, %eax
    cdq

    movl $3, %ecx
    idivl %ecx

    addl $12, %eax

    subl num(%rip), %eax

    subl $1, %eax
    
ret
