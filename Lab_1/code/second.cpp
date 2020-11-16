#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

template<typename T>
void PrintTypes(T Number)
{
	cout << "Беззнаковая интерпретация в 16-ой форме: " << hex <<(unsigned short)Number << endl << "Беззнаковая интерпретация в 10-ой форме: " << dec << (unsigned short)Number << endl;
	cout << "Знаковая интерпретация в десятичной форме: " << dec << (short)Number << endl<<"Двоичная форма:" <<bitset<16>(Number) << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Максимальное беззнаковое:\n";
	PrintTypes(USHRT_MAX);
	cout << "\nМинимальное беззнаковое:\n";
	PrintTypes(0);
	cout << "\nМаксимальное со знаком:\n";
	PrintTypes(SHRT_MAX);
	cout << "\nМинимальное со знаком:\n";
	PrintTypes(SHRT_MIN);

	system("Pause");
	return 0;
}
