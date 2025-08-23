// PS - Program to calculate Fibonacci Series

#include<stdio.h>

void Fibonacci(int iNo)
{
    int first = 0, second = 1;
    int next = 0;
    printf("The Fibonacci Series upto %d terms :: \n", iNo);

    for(int i = 0; i<iNo; i++)
    {
        printf(" %d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main()
{
    int iNo = 0;

    printf("Enter number upto which you want the Fibonacci Series :: ");
    scanf("%d", &iNo);

    Fibonacci(iNo);

    return 0;
}