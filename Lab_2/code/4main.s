;12 :	int main() {
0x40147f	push   %ebp
0x401480	mov    %esp,%ebp
0x401482	and    $0xfffffff0,%esp
0x401485	sub    $0x20,%esp
0x401488	call   0x401a60 <__main>
;14 :		int x=10;
0x40148d	movl   $0xa,0x1c(%esp)
;15 :		int y1=0;
0x401495	movl   $0x0,0x18(%esp)
;30 :	    y1=func(x);
0x40149d	mov    0x1c(%esp),%eax  //значение х перемещается в регистор(eax(«аккумулятор»))
0x4014a1	mov    %eax,(%esp)         // значение передается в регистр(esp)
0x4014a4	call   0x401460 <func(int)> //вызов функции
0x4014a9	mov    %eax,0x18(%esp)  //перемещение результата функции из регистра eax в переменную  у1.
;32 :		system("Pause");
0x4014ad	movl   $0x405065,(%esp)
0x4014b4	call   0x403ae8 <system>
;33 :		return 0;
0x4014b9	mov    $0x0,%eax
;34 :	}
0x4014be	leave
0x4014bf	ret
