#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
srand(time(NULL));
int N = 10;


int * intArray = new int [N];
cout << "Sizeof int = "<<sizeof(intArray[0]) << endl<< "Array: ";
for(int i=0;i<N;i++)
{
intArray[i] = rand()%100;
cout << intArray[i]<<" "<<&intArray[i]<<endl;
}
cout << "\n";

int Max = 0;
asm (
"movl $1, %%eax\n"
"movl %[intArray], %%ebx\n"
"movl (%%ebx), %%ebx\n"
"Start:\n"
"cmpl %[N], %%eax\n"
"je Exit\n"
"movl %[intArray], %%ecx\n"
"leal (%%ecx, %%eax, 4), %%ecx\n"
"movl (%%ecx),%%ecx\n"
"cmpl %%ebx, %%ecx\n"
"jc lable\n"
"movl %%ecx, %%ebx\n"
"lable:\n\t"
"incl %%eax\n"
"jmp Start\n"
"Exit:\n"
"movl %%ebx, %[Max]\n"
: [Max]"+m" (Max)
: [intArray]"m" (intArray), [N]"m"(N)
: "cc","%eax","%ebx","%ecx"
);
cout << "max: " << Max;

delete [] intArray;
return 0;
}
