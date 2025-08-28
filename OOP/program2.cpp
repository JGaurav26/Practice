#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

        void display()
        {
            cout<<"The value of i = "<<i<<endl;
            cout<<"The value of j = "<<j<<endl;
            cout<<"Inside the display of Demo class"<<endl;

        }
};

int main()
{
    Demo obj1;
    Demo obj2;

    obj1.i = 10;
    obj1.j = 20;
    obj1.display();

    obj2.i = 30;
    obj2.j = 40;
    obj2.display();

    return 0;
}