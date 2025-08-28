#include<iostream>
using namespace std;

float calculate(float marks, float outof = 100)
{
    float percentage = (marks/outof)*100;
    return percentage;
}

int main()
{
    float fAns = 0.0f;
    fAns = calculate(69);
    cout<<"Percentage(%) = "<<fAns<<endl;

    fAns = calculate(400, 1000);
    cout<<"Percentage(%) = "<<fAns<<endl;

    return 0;
}