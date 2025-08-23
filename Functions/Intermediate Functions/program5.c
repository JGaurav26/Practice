// PS - Program to find the GCD and LCM of two numbers

#include <stdio.h>

// Function to find GCD using Euclidean Algorithm
int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find LCM
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);  // Formula: LCM(a,b) * GCD(a,b) = a*b
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));

    return 0;
}