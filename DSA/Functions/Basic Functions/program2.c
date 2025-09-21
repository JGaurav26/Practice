// PS - Program to find factorial of a number

#include <stdio.h>

void factorial(int iNo)
{
    int fact = 1;

    for (int i = 1; i <= iNo; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is: %d\n", iNo, fact);
}

int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num);

    return 0;
}