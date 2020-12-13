#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
srand(time(NULL));
int N = 10;
int * intArray = new int [N];
cout << "Sizeof int = "<<sizeof(intArray[0]) << endl<< "Array: \n";
for(int i=0;i<N;i++)
{
intArray[i] = rand()%100;
cout << intArray[i]<<" "<<&intArray[i]<<endl;
}
cout << "\n";
delete [] intArray;
return 0;
}