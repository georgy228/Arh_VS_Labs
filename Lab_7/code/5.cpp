#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
int i=10,fi=1,fi1=1;
cin >>i;
srand(time(NULL));
int N = i;
int * intArray = new int [N];
for(int i=0;i<N;i++)
{
intArray[i] = 0;
}
cout << endl;
asm(
"movl $0, %%ebx\n\t"
"begin: \n"
"cmpl %[i], %%ebx\n\t"
"jz end\n"
"movl %[f1],%%eax\n"
"addl %[f2],%%eax\n"
"movl %[f2],%[f1]\n"
"movl %%eax,%[f2]\n"
"movl %[intArray], %%ecx\n\t"
"movl %%eax,(%%ecx, %%ebx, 4)\n\t"
"incl %%ebx\n\t"
"jmp begin\n"
"end: \n"
:[f1]"+r"(fi),[f2]"+r"(fi1),[i]"+r"(i)
    :[intArray]"m"(intArray)
:"cc","%eax","%ecx","%ebx"
);
cout << "1,1," << intArray[0];
for(int i=1;i<N;i++)
{
cout << "," << intArray[i];
}
return 0;
}