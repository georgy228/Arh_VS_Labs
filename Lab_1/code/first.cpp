#include <iostream>
#include <cmath>
using namespace std;

template<typename T>
void print(T Number)
{
	cout << "Беззнаковая интерпретация в 16-ой форме: " << hex <<(unsigned short)Number << endl << "Беззнаковая интерпретация в 10-ой форме: " << dec << (unsigned short)Number << endl;
	cout << "Знаковая интерпретация в десятичной форме: " << dec << (short)Number << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int x = -34;
	int y = pow(2, 15) + 7;
	cout << "-34: \n";
	print(x);
	cout << "\n2^15 + 7: \n";
	print(y);
	system("Pause");
	return 0;
}
