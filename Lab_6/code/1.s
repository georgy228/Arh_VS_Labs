.data
printf_format:
.string "f = %d\n"
x:
.int 5
y:
.int 7
.globl main
main:
movl x, %eax
add y,%eax
add $-4,%eax
cmpl $0, %eax
jg s2
movl x, %eax
jmp end
s2:
movl y, %eax
add $2,%eax
end:
pushl %eax
pushl $printf_format
call printf
addl $8, %esp
movl $0, %eax
ret