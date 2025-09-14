// Create a class in C++ to demonstrate the use of encapsulation and data abstraction.

#include<iostream>
#include<string>
using namespace std;

class Student
{
    private: // Encapsulation(data hidden)
        int RollNo;
        string name;
    public: // Data Abstraction(access via functions)
        void setData(int r, string n)
        {
            RollNo = r;
            name = n;
        }
        void display()
        {
            cout<<"Name =  "<<name<<"\n RollNo =  "<<RollNo<<endl;
        }
};


int main()
{
    Student s1;
    s1.setData(1,"Gaurav");
    s1.display();
    return 0;
}