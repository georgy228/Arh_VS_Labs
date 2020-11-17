.data
printf_format:
	.string "4-4*13=%d\n"
.globl main
main:
	movl $13, %eax
	imul $-4,%eax
	add $4,%eax
	pushl %eax
	pushl $printf_format
	call printf
	addl $8, %esp
	movl $0, %eax
	ret
