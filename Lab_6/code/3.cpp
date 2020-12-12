#include <iostream>
using namespace std;

int main(void){

    int i=10;
    int fi=1;
    int fi1=1;
    cin>>i;
    char *c="fi(N-1)=%d \nfi(N)=%d\n";
    asm(
        "begin: \n"
        "sub $1,%[i] \n"
        "jz end\n"
        "movl %[f1],%%eax\n"
        "addl %[f2],%%eax\n"
        "movl %[f2],%[f1]\n"
        "movl %%eax,%[f2]\n"
        "jmp begin\n"
        "end: \n"
        "push %[f2]\n"
        "push %[f1]\n"
        "push %[cnst]\n"
        "call _printf \n"
        "add $0xc,%%esp\n"
        :[f1]"+r"(fi),[f2]"+r"(fi1),[i]"+r"(i)
        :[cnst]"m"(c)
        :"cc","%eax"
        );



    return 0;
}
