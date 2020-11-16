#include <iostream>

using namespace std;

float func(float x){
	float y1=0;
	y1 = x * 5;
	return y1;
}
int main() {

	float x=10;
	float y1=0;
              y1=func(x);
	system("Pause");
	return 0;
}
