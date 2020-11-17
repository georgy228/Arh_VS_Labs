;5  :	int func(int x){
0x401460	push   %ebp
0x401461	mov    %esp,%ebp
;6  :		static int y1=1;
;7  :	    y1+=x;
0x401463	mov    0x404004,%edx        //y1 имеет  конкретный адрес в памяти
0x401469	mov    0x8(%ebp),%eax
0x40146c	add    %edx,%eax               // у1+х
0x40146e	mov    %eax,0x404004     //перенос результата обратно в у1 по адресу
;8  :		return y1;
0x401473	mov    0x404004,%eax    //возвращение результата у1 через регистр eax
;10 :	}
0x401478	pop    %ebp
0x401479	ret
