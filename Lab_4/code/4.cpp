#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void)
{
    unsigned int ASCIINumber = 0x39;
    unsigned int result;
    asm ( "and $0x0F, %0" : "=r" (result) : "0" (ASCIINumber) );
    cout<<result<<endl;

    unsigned int numer = 0x9;
    asm ( "xor $0x21, %0" : "=r" (ASCIINumber) : "0" (numer) );
    asm ( "sub $0x1, %0" : "=r" (ASCIINumber) : "0" (ASCIINumber) );
    cout<<"0x"<<ASCIINumber<<endl;
    return 0;
}
