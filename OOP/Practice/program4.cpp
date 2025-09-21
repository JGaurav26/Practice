#include<iostream>
using namespace std;


int main()
{
    int Arr[5] = {1,2,3,4,5};
    int (&Brr)[5] = Arr;

    cout<<"Arr[0] :: "<<Arr[0]<<endl; // 1
    cout<<"Brr[0] :: "<<Brr[0]<<endl; // 1

    return 0;
}