#include <stdio.h>
int main(void)
{
    double a = 1.5;
    double x = 0, y;
    asm(
//st(0)=%[X]
        "fldl %[X]\n"
//st(0)=cos(%[X])
        "fcos\n"
//%[Y]=cos(...)
        "fstpl %[Y]\n"
//st(0)=%[X]
        "fldl %[X]\n"
//st(0)=cos(%[X])
        "fcos\n"
//st(0)=st(0)*Y
        "fmul %[Y]\n"
//%[Y]=cos(...)^2
        "fstp %[Y]\n"

//st(0)=%[X]
        "fldl %[X]\n"
//st(0)=%[A]*%[X]
        "fmull %[A]\n"
//st(0)=tg(st(0))
        "fptan\n"
//st(0)=y+st(0)
        "fadd %[Y]\n"
//y=st(0)
        "fstp %[Y]\n"

        :[Y]"=m"(y)
        :[X]"m"(x), [A]"m"(a)
        :"cc"
    );
    printf("%f",y);
}
