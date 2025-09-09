// Design a C++ program that uses multiple functions, control structures, and input/output for a basic calculator.

#include<iostream>
using namespace std;

class Calculator
{
    public:
        void cFunctions()
        {
            int iNo1=0, iNo2=0, iAns = 0;
            char choice;
            cout<<"Welcome to BASIC CALCULATOR"<<endl;
            cout<<"Enter 1st no. = ";
            cin>>iNo1;
            cout<<"\nEnter 2nd no. = ";
            cin>>iNo2;
            cout<<"\nEnter the operation to be perform :: ";
            cin>>choice;
            switch(choice)
            {
                case '+' :
                    iAns = iNo1 + iNo2;
                    cout<<"Answer = "<<iAns;
                    break;

                case '-' :
                    iAns = iNo1 - iNo2;
                    cout<<"Answer = "<<iAns;
                    break;

                case '*' :
                    iAns = iNo1 * iNo2;
                    cout<<"Answer = "<<iAns;
                    break;

                case '/' :
                    iAns = iNo1 / iNo2;
                    cout<<"Answer = "<<iAns;
                    break;

                default:
                cout<<"Enter valid choice";
            }
        }
};

int main()
{
    Calculator c1;
    c1.cFunctions();
    return 0;
}