;5  :	int func(int x){
0x401460	push   %ebp
0x401461	mov    %esp,%ebp
0x401463	sub    $0x10,%esp
;6  :		int y1=1;
0x401466	movl   $0x1,-0x4(%ebp)
;7  :	    y1+=x;
0x40146d	mov    0x8(%ebp),%eax
0x401470	add    %eax,-0x4(%ebp)  // у1=у1+х 
;8  :		return y1;
0x401473	mov    -0x4(%ebp),%eax  // вывод результата в регистр(eax «аккумулятор»)
;10 :	}
0x401476	leave
0x401477	ret
