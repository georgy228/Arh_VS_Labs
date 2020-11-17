#include <iostream>
using namespace std;

int func(int x){
	int y1=0;
	y1 = x * 5;
	return y1;
}
int main() {
	int x=10;
	int y1=0;
              y1=func(x);
	system("Pause");
	return 0;
}
