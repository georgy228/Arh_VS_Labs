;6  :	int main() {
0x401460	lea    0x4(%esp),%ecx
0x401464	and    $0xfffffff0,%esp
0x401467	pushl  -0x4(%ecx)
0x40146a	push   %ebp
0x40146b	mov    %esp,%ebp
0x40146d	push   %ecx
0x40146e	sub    $0x24,%esp
0x401471	call   0x401b30 <__main>
;8  :		long x=10;
0x401476	movl   $0xa,-0x10(%ebp)
;9  :		long y1=0;
0x40147d	movl   $0x0,-0x14(%ebp)
;10 :		long y2=0;
0x401484	movl   $0x0,-0x18(%ebp)
;11 :		long y3=0;
0x40148b	movl   $0x0,-0xc(%ebp)
;13 :		y1 = x * 5;
0x401492	mov    -0x10(%ebp),%edx
0x401495	mov    %edx,%eax
0x401497	shl    $0x2,%eax
0x40149a	add    %edx,%eax
0x40149c	mov    %eax,-0x14(%ebp)
;14 :		y2 = x * 7;
0x40149f	mov    -0x10(%ebp),%edx
0x4014a2	mov    %edx,%eax
0x4014a4	shl    $0x3,%eax
0x4014a7	sub    %edx,%eax
0x4014a9	mov    %eax,-0x18(%ebp)
;15 :		if (x < 7) {
0x4014ac	cmpl   $0x6,-0x10(%ebp)
0x4014b0	jg     0x4014bb <main()+91>
;16 :			y3 = 0;
0x4014b2	movl   $0x0,-0xc(%ebp)
0x4014b9	jmp    0x4014c1 <main()+97>
;17 :		}
;18 :		else
;19 :		{
;20 :			y3 = x;
0x4014bb	mov    -0x10(%ebp),%eax
0x4014be	mov    %eax,-0xc(%ebp)
;21 :		}
;22 :		cout<<"x="<<x<<" y1="<<y1<<" y2="<<y2<<" 23="<<y3<<" ";
*************ПРОПУЩЕНО МНОГО КОДА ДЛЯ COUT**********************
;26 :		system("Pause");
0x40155d	movl   $0x405079,(%esp)
0x401564	call   0x403bb8 <system>
;27 :		return 0;
0x401569	mov    $0x0,%eax
;28 :	}
0x40156e	mov    -0x4(%ebp),%ecx
0x401571	leave
0x401572	lea    -0x4(%ecx),%esp
0x401575	ret
