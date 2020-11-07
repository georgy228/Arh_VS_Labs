.data
str: .string "13*4 + 4 = %d\n"
x: .int 13
.global main
main:
movl x, %eax
shl $0x2,%eax
add $0x4,%eax
pushl %eax
pushl $str
call printf
addl $2*4, %esp
xor %eax, %eax
ret


