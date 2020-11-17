#include <iostream>
extern "C" int calc(int x);
__asm(
    "_calc:\n"
    "   movl 4(%esp), %eax\n" //число их стека(размер операнда = 4) кладется в аккумулятор
    "   imul $-4, %eax\n"    // умножается -4 на число их аккумулятора
    "   add $4, %eax\n"     //складывается 4 и результат умножения
    "   ret"               //возвращается результат
);
int main(void)
{
int x = 0;
int y = calc(x);
std::cout<<y;
}
