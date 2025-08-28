#include<iostream>
using namespace std;

class Demo{
    public:
        int i;
        int j;

        Demo() // Default Constructor
        {
            cout<<"Insdie the Default Constructor \n";
        }

        Demo(int A, int B) // Paramatrized Constructor
        {
            i = A;
            j = B;
            cout<<"Inside the Paramatrized Constructor \n";
        }

        Demo(Demo &ref) // Copy Constructor
        {
            i = ref.i;
            j = ref.j;
            cout<<"Inside the Copy Constructor\n";
        }

        ~Demo() // Destructor
        {
            cout<<"Inside the Destructor \n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11, 22);
    Demo obj3(obj2);
    return 0;
}
