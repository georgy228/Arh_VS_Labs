#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

template<typename T>
void PrintTypes(T Number)
{
	cout << "hex: " << hex <<(T)Number << endl ;
	cout << "dec: " << dec << (T)Number << endl;
}

template <typename T>
T Conjunction_(T x,T y) // конъюнкция
{
	return(x & y);
}

template <typename T>
T Disjunction_(T x, T y) // дизъюнкция
{
	return(x|y);
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
	
	a = (-a);
	return a;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << endl << "---------------------------------------UNSIGNED OPERATIONS---------------------------------------" << endl;
	//binary operations
	/*cout << endl<<"BINARY OPERATIONS"<<endl;*/
	unsigned short int xB1, yB1, xB2, yB2;
	xB1 = 0x8008;
	yB1 = 0x1111;
	xB2 = 0x0005;
	yB2 = 0x0002;
	
	cout << endl << "x1 = " <<hex <<xB1 <<" = " <<dec<< xB1<<endl;
	cout <<"y1 = " << hex<<yB1 << " = "<<dec<<yB1 << endl;
	cout << endl << "x2 = " <<hex<< xB2<<" = "<<dec<<xB2;
	cout << endl << "y2 = " <<hex <<yB2<<" = "<< dec<<yB2<< endl;
	cout <<endl <<"Conjuction" << endl << "sys 1---------" << endl;
	PrintTypes(Conjunction_(xB1, yB1));
	cout << "sys 2---------" << endl;
	PrintTypes(Conjunction_(xB2, yB2));
	cout <<endl <<"Disjunction" << endl<<"sys 1---------"<<endl;
	PrintTypes((unsigned short int)Disjunction_(xB1, yB1));
	cout << "sys 2---------" << endl;
	PrintTypes((unsigned short int)Disjunction_(xB2, yB2));
	cout << endl<<"XOR" << endl;
	PrintTypes(XOR(xB1, yB1));
	cout << "sys 2---------" << endl;
	PrintTypes(XOR(xB2, yB2));
	cout <<endl<<"NOT" << endl<<"sys 1---------"<<endl;
	PrintTypes(NOT(xB1));
	//PrintTypes(NOT(yB1));
	cout <<"sys 2---------" << endl;
	PrintTypes(NOT(xB2));
	//PrintTypes(NOT(yB2));
	cout <<endl<<"CONVERT" << endl<<"sys 1---------"<<endl;
	PrintTypes(convert(xB1));
	//PrintTypes(convert(yB1));
	cout <<"sys 2---------" <<endl;
	PrintTypes(convert(xB2));
	//PrintTypes(convert(yB2));
	cout <<endl<<"Bit left" << endl << "sys 1---------" << endl;
	PrintTypes(BitLeft(xB1, yB1));
	cout << "sys 2---------" << endl;
	PrintTypes(BitLeft(xB2, yB2)); 
	cout <<endl<<"Bit right" << endl << "sys 1---------" << endl;
	PrintTypes(BitRight(xB1, yB1));
	cout << "sys 2---------" << endl;
	PrintTypes(BitRight(xB2, yB2));
	//

	cout << endl << "---------------------------------------SIGNED OPERATIONS---------------------------------------" << endl;
	//binary operations
	//cout << endl << "BINARY OPERATIONS" << endl;
	signed short int xB1_, yB1_, xB2_, yB2_;
	xB1_ = 0x8008;
	yB1_ = 0x1111;
	xB2_ = 0x0005;
	yB2_ = 0x0002;
	cout << endl << "x1 = " << hex << xB1_ << " = " << dec << xB1_ << endl;
	cout << "y1 = " << hex << yB1_ << " = " << dec << yB1_ << endl;
	cout << endl << "x2 = " << hex << xB2_ << " = " << dec << xB2_;
	cout << endl << "y2 = " << hex << yB2_ << " = " << dec << yB2_ << endl;
	cout << endl << "Conjuction" << endl << "sys 1---------" << endl;
	PrintTypes(Conjunction_(xB1_, yB1_));
	cout << "sys 2---------" << endl;
	PrintTypes(Conjunction_(xB2_, yB2_));
	cout <<endl<<"Disjunction" << endl << "sys 1---------" << endl;
	PrintTypes(Disjunction_(xB1_, yB1_));
	cout << "sys 2---------" << endl;
	PrintTypes(Disjunction_(xB2_, yB2_));
	cout <<endl<<"XOR" << endl << "sys 1---------" << endl;
	PrintTypes(XOR(xB1_, yB1_));
	cout << "sys 2---------" << endl;
	PrintTypes(XOR(xB2_, yB2_));
	cout <<endl<<"NOT" << endl << "sys 1---------" << endl;
	PrintTypes(NOT(xB1_));
	//PrintTypes(NOT(yB1_));
	cout << "sys 2---------" << endl;
	PrintTypes(NOT(xB2_));
	//PrintTypes(NOT(yB2_));
	cout <<endl<<"CONVERT" << endl << "sys 1---------" << endl;
	PrintTypes(convert(xB1_));
	//PrintTypes(convert(yB1_));
	cout << "sys 2---------" << endl;
	PrintTypes(convert(xB2_));
	//PrintTypes(convert(yB2_));
	cout <<endl<<"Bit left" << endl << "sys 1---------" << endl;
	PrintTypes(BitLeft(xB1_, yB1_));
	cout << "sys 2---------" << endl;
	PrintTypes(BitLeft(xB2_, yB2_));
	cout <<endl<<"Bit right" << endl << "sys 1---------" << endl;
	PrintTypes(BitRight(xB1_, yB1_));
	cout << "sys 2---------" << endl;
	PrintTypes(BitRight(xB2_, yB2_));
	system("Pause");
	return 0;
}
