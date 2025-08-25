// PS - Input and Print Elements of an Array

#include<stdio.h>

void showArr()
{
    int iArr[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i<5; i++)
    {
        printf("%d \t", iArr[i]);
    }
}

int main()
{
    showArr();
    return 0;
}