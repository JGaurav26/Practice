// PS - Program to calculate the sum of two numbers

#include<stdio.h>

void iSum(int iNo1, int iNo2)
{
    int sum = 0;
    sum = iNo1 + iNo2;

    printf("The sum = %d \n", sum);
}

int main()
{
    int iVal1, iVal2;

    printf("Enter first number :: ");
    scanf("%d", &iVal1);

    printf("Enter second number :: ");
    scanf("%d", &iVal2);

    iSum(iVal1, iVal2);
    return 0;
}