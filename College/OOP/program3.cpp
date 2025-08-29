#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int &noref = no;

    int gojo = 26;
    int &gojoref = gojo;

    int *ptr = &no;
    int *(&ptrRef) = ptr;

    cout<<"no :: "<<no<<endl; // 11
    cout<<"noref :: "<<noref<<endl; // 11

    cout<<"&no :: "<<&no<<endl; // Address = 100
    cout<<"&noref :: "<<&noref<<endl; // Address = 100

    cout<<"*ptr :: "<<*ptr<<endl; // 11
    cout<<"*ptrRef :: "<<*ptrRef<<endl; // 11

    no++;
    cout<<"after incrementing no"<<endl;
    cout<<"no :: "<<no<<endl; // 12
    cout<<"noref :: "<<noref<<endl; // 12

    noref++;
    cout<<"after incrementing noref"<<endl;
    cout<<"no :: "<<no<<endl; // 13
    cout<<"noref :: "<<noref<<endl; // 13   


    return 0;
}