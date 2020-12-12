#include <iostream>
using namespace std;

int main(void){
    float x=10,y;
    asm(
        "fldpi\n"
        "fld %[X]\n"
        "fcomi %%st(1)\n"
        "fcmovna %%st(1),%%st(0)\n"
        "fstp %[Y]\n"
        "ffree %%st(0)\n"
        "ffree %%st(0)\n"
        :[Y]"=m"(y)
        :[X]"m"(x)
        :"cc"
        );
        cout<<y<<endl;
    return 0;
}
