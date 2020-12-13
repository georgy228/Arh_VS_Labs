#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct strc
{
    int key;
    double value;
};

int main()
{
    srand(time(NULL));
    int N=10;
    struct strc * Array=new struct strc[N] ;
    for (int i=0 ; i<N ; i++)
    {
        Array[i].key=rand()%(N/2);
        Array[i].value=(rand()%1000)/(double)100;

        cout<<"Key = "<<Array[i].key <<", Val = "<<Array[i].value<<" "<<&Array[i]<<endl;
    }
    cout<<"\nSize of struct: "<< sizeof(Array[0])<<"\n key (int): "<< sizeof(Array[0].key)<<"\n val (double):"<< sizeof(Array[0].value)<<"\n";
    delete [] Array;
    return 0;
}
