#include <iostream>
extern "C" int calc(int x);
__asm(
    "_calc:\n"
    "   movl 4(%esp), %eax\n" //����� �� �����(������ �������� = 4) �������� � �����������
    "   imul $-4, %eax\n"    // ���������� -4 �� ����� �� ������������
    "   add $4, %eax\n"     //������������ 4 � ��������� ���������
    "   ret"               //������������ ���������
);
int main(void)
{
int x = 0;
int y = calc(x);
std::cout<<y;
}


