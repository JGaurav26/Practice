#include<iostream>
using namespace std;

class Demo
{
    int i;
    public:
        int j;
    private:
        int k;
    protected:
        int a;


    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }

        void display()
        {
            cout<<"Value of i :: "<<i<<endl;
            cout<<"Value of j :: "<<j<<endl; 
            cout<<"Value of k :: "<<k<<endl;
            cout<<"Value of a :: "<<a<<endl;
        }
};

class Hello : public Demo{
    public:
        void HelloDisplay()
        {
            cout<<"Value of j :: "<<j<<endl;
            cout<<"Value of a :: "<<a<<endl;
        }
};

int main()
{
    Hello hobj;
    hobj.display();
    hobj.HelloDisplay();
    return 0;
}