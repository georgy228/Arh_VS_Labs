#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int a= 0x12345678;
	char a1[] = "abcd";
	char a2[] = "����";
	wchar_t str1[] = L"abcd";
	wchar_t str2[] = L"����";

	system("Pause");
	return 0;
}