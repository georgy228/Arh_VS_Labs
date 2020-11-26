#include <stdio.h>

int main(void)
{

    unsigned int i = 2147483647;
    bool flag = false;
        // прибавляем 1 к i
    asm ( "add $1, %0\n" : "=r" (i) : "0" (i) );
    //проверяем overfloew flag, если ==0, то переходим к метке Zero
    asm ( "jno Zero;"\
         // если !=0 то меняем значение переменной
          "mov $0x1,%0;"\
          "Zero :"\
          : "=r" (flag) : "0" (flag) );


    printf("i+1 = %d\n", i);
    i=i+1;
    if (flag==true)
    {
        printf("Invalid result received\n");
    }
    else
    {
        printf("The result is correct\n");
    }

    return 0;

}