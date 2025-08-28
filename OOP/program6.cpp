#include<iostream>
using namespace std;

class Arithmetic{
    public:
        int Addition(int iNo1, int iNo2) // name mangling = Addition@2ii
        {
            int iAns = 0;
            int iResult = iNo1 + iNo2;
            return iResult;
        }

        int Addition(int iNo1, int iNo2, int iNo3) // name mangling = Addition@3iii
        {
            int iAns = 0;
            int iResult = iNo1 + iNo2 + iNo3;
            return iResult;
        }

        float Addition(float iNo1, float iNo2)
        {
            float iAns = 0.0f;
            float iResult = iNo1 + iNo2;
            return iResult;
        }
};


int main()
{
    Arithmetic aobj1;
    int iAns = 0;

    iAns = aobj1.Addition(10, 20);
    cout<<"10 + 20 = "<<iAns<<endl;
    
    iAns = aobj1.Addition(10, 20, 30);
    cout<<"10 + 20 + 30 = "<<iAns<<endl;

    float iAns1 = aobj1.Addition(10.5f, 20.5f);
    cout<<"10.5 + 20.5 = "<<iAns1<<endl;

    return 0;
}