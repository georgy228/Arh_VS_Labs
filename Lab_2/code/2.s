;10 :		y1 = x * 5;
0x40147d	mov    -0x10(%ebp),%edx    //перенос значения х в регистр данных edx
0x401480	mov    %edx,%eax          // перенос х в аккумулятор
0x401482	shl    $0x2,%eax         // битовый сдвиг х на 2 бита = х*4
0x401485	add    %edx,%eax        // результат сдвига + х = 4х+х = х*5
0x401487	mov    %eax,-0x14(%ebp)// перенос результата в у1

;11 :		y2 = x * 7;
0x40148a	mov    -0x10(%ebp),%edx           //перенос значения х в регистр данных edx
0x40148d	mov    %edx,%eax                      // перенос х в аккумулятор
0x40148f	shl    $0x3,%eax                        // битовый сдвиг х на 3 бита = х*8
0x401492	sub    %edx,%eax                    // результат сдвига - х = 8х-х = 7х
0x401494	mov    %eax,-0x18(%ebp)  // перенос результата в у2
;12 :		if (x < 7) {
0x401497	cmpl   $0x6,-0x10(%ebp)       //просиходит сравнение(х-6) и установка флага
0x40149b	jg     0x4014a6 <main()+70>// если х>(jg –jump  greater ) то происходит переход к метке ”0x4014a6”
;13 :			y3 = 0;
0x40149d	movl   $0x0,-0xc(%ebp) m   // в у3 кладется 0
0x4014a4	jmp    0x4014ac <main()+76> // прыжок к метке «0x4014ac» - выход из if.
;14 :		}
;15 :		else
;16 :		{
;17 :			y3 = x;
0x4014a6	mov    -0x10(%ebp),%eax  // значение х помещается в аккумулятор
0x4014a9	mov    %eax,-0xc(%ebp) // из аккумулятора х помещается в у3
;18 :		}
