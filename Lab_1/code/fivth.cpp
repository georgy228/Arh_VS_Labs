#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	unsigned short int t = 0XEE22;
	unsigned int t1 = t;
	cout << "unsigned short int x:" << "\t10x: " << dec << t << "\t16x: " << hex << t << endl<<endl;
	cout << "unsigned int x:" << "\t10x: " << dec << t1 << "\t16x: " << hex << t1 << endl << endl;
	
	signed short int d = 0xEE22;
	signed int d1 = d;
	cout << "signed short int x:" << "\t10x: " << dec << d << "\t16x: " << hex << d << endl << endl;
	cout << "signed int x:" << "\t10x: " << dec << d1 << "\t16x:" << hex << d1 << endl << endl;
	system("Pause");
	return 0;
}
