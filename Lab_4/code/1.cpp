#include <stdio.h>

int main(void)
{

    unsigned int i = 2147483647;
    bool flag = false;
        // ���������� 1 � i
    asm ( "add $1, %0\n" : "=r" (i) : "0" (i) );
    //��������� overfloew flag, ���� ==0, �� ��������� � ����� Zero
    asm ( "jno Zero;"\
         // ���� !=0 �� ������ �������� ����������
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