.section .data
    .global s1
    s1: .short 3

    .global s2
    s2: .short 5

.section .text
    .global crossSumBytes

crossSumBytes:
    movw s1(%rip), %ax
    movw s2(%rip), %cx
    addb %ch, %al
    addb %cl, %ah
    
ret 
