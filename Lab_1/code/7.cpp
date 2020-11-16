#include <iostream>
#include <typeinfo>
using namespace std;


template<typename T>
void sizeVar() {
	cout <<typeid(T).name()<<" have size = " <<sizeof(T)<<" bytes"<<endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	

	
	
	//cout << &a;
	sizeVar<char>();
	sizeVar<bool>();
	sizeVar<wchar_t>();
	sizeVar<short>();
	sizeVar<int>();
	sizeVar<long>();
	sizeVar<long long>();
	sizeVar<float>();
	sizeVar<double>();
	sizeVar<long double>();
	sizeVar<size_t>();
	sizeVar<ptrdiff_t>();
	sizeVar<void*>();
	system("Pause");
	return 0;
}
