;12 :	int main() {
0x40147a	lea    0x4(%esp),%ecx
0x40147e	and    $0xfffffff0,%esp
0x401481	pushl  -0x4(%ecx)
0x401484	push   %ebp
0x401485	mov    %esp,%ebp
0x401487	push   %ecx
0x401488	sub    $0x24,%esp
0x40148b	call   0x401a90 <__main>
;14 :		int x=10;
0x401490	movl   $0xa,-0xc(%ebp)
;15 :		int y1=0;
0x401497	movl   $0x0,-0x10(%ebp)
;30 :	    y1=func(x);
0x40149e	mov    -0xc(%ebp),%eax
0x4014a1	mov    %eax,(%esp)
0x4014a4	call   0x401460 <func(int)>
0x4014a9	mov    %eax,-0x10(%ebp)
;31 :	    y1=func(x);
0x4014ac	mov    -0xc(%ebp),%eax
0x4014af	mov    %eax,(%esp)
0x4014b2	call   0x401460 <func(int)>
0x4014b7	mov    %eax,-0x10(%ebp)
;32 :	    cout<<y1;
0x4014ba	mov    -0x10(%ebp),%eax
0x4014bd	mov    %eax,(%esp)
0x4014c0	mov    $0x6ff01a40,%ecx
0x4014c5	call   0x401554 <std::ostream::operator<<(int)>
0x4014ca	sub    $0x4,%esp
;35 :		system(“Pause”);
0x4014cd	movl   $0x405065,(%esp)
0x4014d4	call   0x403b18 <system>
;36 :		return 0;
0x4014d9	mov    $0x0,%eax
;37 :	}
0x4014de	mov    -0x4(%ebp),%ecx
0x4014e1	leave
0x4014e2	lea    -0x4(%ecx),%esp
0x4014e5	ret
