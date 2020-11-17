;6  :	int main() {
0x401460	lea    0x4(%esp),%ecx
0x401464	and    $0xfffffff0,%esp
0x401467	pushl  -0x4(%ecx)
0x40146a	push   %ebp
0x40146b	mov    %esp,%ebp
0x40146d	push   %edi
0x40146e	push   %esi
0x40146f	push   %ebx
0x401470	push   %ecx
0x401471	sub    $0x38,%esp
0x401474	call   0x401b30 <__main>
;8  :		short x=10;
0x401479	movw   $0xa,-0x1c(%ebp) // mov размером 1 слово – 2 байта (тип short – 2 байта)
;9  :		short y1=0;
0x40147f	movw   $0x0,-0x1e(%ebp)
;10 :		short y2=0;
0x401485	movw   $0x0,-0x20(%ebp)
;11 :		short y3=0;
0x40148b	movw   $0x0,-0x1a(%ebp)
;13 :		y1 = x * 5;
0x401491	movzwl -0x1c(%ebp),%edx  //Перемещение слова (short)с нулевым расширением в long
0x401495	mov    %edx,%eax
0x401497	shl    $0x2,%eax
0x40149a	add    %edx,%eax
0x40149c	mov    %ax,-0x1e(%ebp) //перенос из регистра ax(малые разряды eax) в у1
;14 :		y2 = x * 7;
0x4014a0	movzwl -0x1c(%ebp),%edx
0x4014a4	mov    %edx,%eax
0x4014a6	shl    $0x3,%eax
0x4014a9	sub    %edx,%eax
0x4014ab	mov    %ax,-0x20(%ebp)
;15 :		if (x < 7) {
0x4014af	cmpw   $0x6,-0x1c(%ebp)
0x4014b4	jg     0x4014be <main()+94>
;16 :			y3 = 0;
0x4014b6	movw   $0x0,-0x1a(%ebp)
0x4014bc	jmp    0x4014c6 <main()+102>
;17 :		}
;18 :		else
;19 :		{
;20 :			y3 = x;
0x4014be	movzwl -0x1c(%ebp),%eax
0x4014c2	mov    %ax,-0x1a(%ebp)
;21 :		}
;22 :		cout<<"x="<<x<<" y1="<<y1<<" y2="<<y2<<" 23="<<y3<<" ";
*************ПРОПУЩЕНО МНОГО КОДА ДЛЯ COUT**********************
;26 :		system("Pause");
0x401564	movl   $0x405079,(%esp)
0x40156b	call   0x403bb8 <system>
;27 :		return 0;
0x401570	mov    $0x0,%eax
;28 :	}
0x401575	lea    -0x10(%ebp),%esp
0x401578	pop    %ecx
0x401579	pop    %ebx
0x40157a	pop    %esi
0x40157b	pop    %edi
0x40157c	pop    %ebp
0x40157d	lea    -0x4(%ecx),%esp
0x401580	ret
