#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

template<typename T>
void PrintTypes(T Number)
{
	cout << "Знаковая интерпретация в 16-ой форме: " << hex <<(unsigned short)Number << endl ;
	cout << "Знаковая интерпретация в десятичной форме: " << dec << (short)Number << endl;
}

template <typename T>
T Conjunction_(T x,T y) // конъюнкция
{
	return(x & y);
}

template <typename T>
T Disjunction_(T x, T y) // дизъюнкция
{
	return(x | y);
}

template <typename T>
T XOR(T x, T y) // сложение по модулю 2
{
	return(x ^ y);
}

template <typename T>
T NOT(T value) // отрицание
{
	return(~value);
}

template <typename T>
T BitLeft(T x,T y) // отрицание
{
	return(x<<y);
}
template <typename T>
T BitRight(T x, T y) // отрицание
{
	return(x >> y);
}


template <typename T>
T convert(T a) {
	if (a < 0)
		a = NOT(-a) + 1;
	return a;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << endl << "UNSIGNED OPERATIONS" << endl;
	//binary operations
	cout << endl<<"BINARY OPERATIONS"<<endl;
	unsigned short int xB1, yB1, xB2, yB2;
	xB1 = 0x8008;
	yB1 = 0x1111;
	xB2 = 0x0005;
	yB2 = 0x0002;
	cout << "Conjuction" << endl;
	PrintTypes(Conjunction_(xB1, yB1));
	PrintTypes(Conjunction_(xB2, yB2));
	cout << "Disjunction" << endl;
	PrintTypes(Disjunction_(xB1, yB1));
	PrintTypes(Disjunction_(xB2, yB2));
	cout << "XOR" << endl;
	PrintTypes(XOR(xB1, yB1));
	PrintTypes(XOR(xB2, yB2));
	cout << "NOT" << endl;
	PrintTypes(NOT(xB1));
	PrintTypes(NOT(yB1));
	PrintTypes(NOT(xB2));
	PrintTypes(NOT(yB1));
	cout << "CONVERT" << endl;
	PrintTypes(convert(xB1));
	PrintTypes(convert(yB1));
	PrintTypes(convert(xB2));
	PrintTypes(convert(yB1));
	cout << "Bit left right" << endl;
	PrintTypes(BitLeft(xB1, yB1));
	PrintTypes(BitRight(xB1, yB1));
	PrintTypes(BitLeft(xB2, yB2));
	PrintTypes(BitRight(xB2, yB2));
	//
	system("Pause");
	return 0;
}