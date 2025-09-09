// Write a simple C++ program to demonstrate the use of if, for, and while control structures.

#include<iostream>
using namespace std;

int main()
{
    // if statement
    int a=0;
    cout<<"Using the if statement \n";
    cout<<"Enter a number :: ";
    cin>>a;
    if(a<0)
    {
        cout<<"The entered number is negative\n";
    } else {
        cout<<"The number entered is positive\n";
    }

    cout<<"Using the for loop \n";
    for(int i =1; i<=5; i++)
    {
        cout<<" "<<i;
    }

    cout<<"\nUsing the while loop\n";
    int i = 5;
    while(i>0)
    {
        cout<<" "<<i;
        i--;
    }

    return 0;
}