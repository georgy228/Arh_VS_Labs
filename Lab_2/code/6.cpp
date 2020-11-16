#include <iostream>
using namespace std;
int func(int x){
      static int y1=1;
      y1+=x;
     return y1;
}
int main() {
    int x=10;
    int y1=0;
    y1=func(x);
    y1=func(x);
    cout<<y1;
    system("Pause");
    return 0;
}
