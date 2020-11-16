#include <iostream>
using namespace std;


int main() {

	int x=10;
	int y1, y2, y3;

	y1 = x * 5;
	y2 = x * 7;
	if (x < 7) {
		y3 = 0;
	}
	else
	{
		y3 = x;
	}
	printf_s("x=%d\ny1=%d\ny2=%d\ny3=%d\n", x, y1, y2, y3);
	system("Pause");
	return 0;
}
