// Write a c++ program to count the odd and even number between 20 to 30

#include<iostream>
using namespace std;

class Calculate
{
    public:
        void display()
        {
            int eCount =0, oCount = 0;
            for(int i = 20; i<=30; i++)
            {
                if(i%2 == 0)
                {
                    eCount++;
                } else{
                    oCount++;
                }
            }
            cout<<"Even number count = "<<eCount<<endl;
            cout<<"Odd number count = "<<oCount<<endl;
        }
};

int main()
{
    Calculate c1;
    c1.display();
    return 0;
}