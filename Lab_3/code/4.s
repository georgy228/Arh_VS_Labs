.data
printf_format:
.string "%d\n"
a:
.int 5
b:
.int 6
c:
.int 1
x:
.int 0
y:
.int 0
calc:
movl b, %eax
imul c, %eax
add  a, %eax
movl %eax, x

movl b, %eax
imul c, %eax
movl %eax, y
movl a, %eax
sub  y, %eax
movl %eax, y
ret

.globl main
main:
call calc
movl x, %eax
pushl %eax
pushl $printf_format
call printf
addl $8, %esp
movl $0, %eax 
movl y, %eax
pushl %eax
pushl $printf_format
call printf
addl $8, %esp
movl $0, %eax
ret
