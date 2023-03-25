.section .data
    .global ptrvec
    .global num

.section .text
    .global vec_sum
    .global vec_avg

vec_sum:

    movl $0, %eax
    movw num(%rip), %cx
    movq ptrvec(%rip), %rdi
    cmpw $0, num(%rip) # verificar se num é null
    je end

my_loop:
    addl (%rdi), %eax # adiciona o contéudo de cada elemento do array no registo eax
    addq $4, %rdi # incrementa 4Bytes no vetor
    decw %cx # decrementa o valor de num
    cmpw $0, %cx #verifica se o valor de num está a zero
    jne my_loop
    je end 

vec_avg:
    cmpw $0, num(%rip)
    je return_null

    call vec_sum # procedure que retorna a soma dos elementos do vetor no registo eax
    cdq # instrução usada que irá guardar o resto da divisão no registo edx
    movswl num(%rip), %ecx # conversão do valor de num para inteiro
    idivl %ecx # eax = eax/ecx || edx = eax%ecx
    jmp end

return_null:
    movl $0, %eax

end:
    ret
    