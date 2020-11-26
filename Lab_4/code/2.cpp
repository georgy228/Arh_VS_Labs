#include <stdio.h>

int main(void)
{
    int x=10;
    int y;
    // y=x*(-4)
    asm ( "imul $-4, %0" : "=r" (y) : "0" (x) );
    // y=y+4
    asm ( "add $4, %0" : "=r" (y) : "0" (y) );
    printf("f(x) = %d", y);
    return 0;
}
