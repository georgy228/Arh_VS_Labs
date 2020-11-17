#include <stdio.h>
extern "C" void PrintKey();
extern "C" int startFunc();

void PrintKey(){
int a=0;
printf("Enter result:");
scanf("%d",&a);
printf("Your result - %d",a);
}

__asm(
    "_startFunc:\n"
    "   call _PrintKey\n"
    "   ret"
);
int main(void)
{
 startFunc();
}
