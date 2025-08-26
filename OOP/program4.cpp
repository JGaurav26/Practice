#include<iostream>
using namespace std;

class Demo
{
    public:
        int a;
        int d;
        int e;
    private:
        int b;
    protected:
        int c;

    public:
    Demo()
    {
        a = 10;
        b = 20;
        c = 30;
        d = 100;
        e = 90;
    }

    public:
        void display()
        {
            cout<<"Value of a = "<<a<<endl;
            cout<<"Value of b = "<<b<<endl;
            cout<<"Value of c = "<<c<<endl;

        }
};

class derived : public Demo
{
    public:
        void ddisplay()
        {
            cout<<"Value of d = \n"<<d;
            cout<<"Value of e = \n"<<e;
        }
};

int main()
{
    Demo dobj;
    derived d1;
    dobj.display();
    d1.ddisplay();
    return 0;
}