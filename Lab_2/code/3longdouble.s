;5  :	int main() {
0x401460	push   %ebp
0x401461	mov    %esp,%ebp
0x401463	and    $0xfffffff0,%esp
0x401466	sub    $0x40,%esp
0x401469	call   0x401a80 <__main>
;6  :	    long double x=10;
0x40146e	fldt   0x405080
0x401474	fstpt  0x34(%esp)
;7  :		long double y1=0;
0x401478	fldz
0x40147a	fstpt  0x28(%esp)
;8  :		long double y2=0;
0x40147e	fldz
0x401480	fstpt  0x1c(%esp)
;9  :		long double y3=0;
0x401484	fldz
0x401486	fstpt  0x10(%esp)
;11 :		y1 = x * 5;
0x40148a	fldt   0x34(%esp)
0x40148e	fldt   0x405090
0x401494	fmulp  %st,%st(1)
0x401496	fstpt  0x28(%esp)
;12 :		y2 = x * 7;
0x40149a	fldt   0x34(%esp)
0x40149e	fldt   0x4050a0
0x4014a4	fmulp  %st,%st(1)
0x4014a6	fstpt  0x1c(%esp)
;13 :		if (x < 7) {
0x4014aa	fldt   0x4050a0
0x4014b0	fldt   0x34(%esp)
0x4014b4	fxch   %st(1)
0x4014b6	fucompp
0x4014b8	fnstsw %ax
0x4014ba	sahf
0x4014bb	jbe    0x4014c5 <main()+101>
;14 :			y3 = 0;
0x4014bd	fldz
0x4014bf	fstpt  0x10(%esp)
0x4014c3	jmp    0x4014cd <main()+109>
;15 :		}
;16 :		else
;17 :		{
;18 :			y3 = x;
0x4014c5	fldt   0x34(%esp)
0x4014c9	fstpt  0x10(%esp)
;19 :		}
;20 :		//cout<<"x="<<x<<" y1="<<y1<<" y2="<<y2<<" 23="<<y3<<" ";
;22 :		system("Pause");
0x4014cd	movl   $0x405071,(%esp)
0x4014d4	call   0x403b08 <system>
;23 :		return 0;
0x4014d9	mov    $0x0,%eax
;24 :	}
0x4014de	leave
0x4014df	ret
