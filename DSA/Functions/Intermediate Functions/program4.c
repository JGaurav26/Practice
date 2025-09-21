// PS - Program to calculate the power of a number

#include <stdio.h>

void power()
{
    int base, exp;
    long long result = 1;  // result may become large

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        result *= base;
    }

    printf("%d ^ %d = %lld\n", base, exp, result);
}

int main()
{
    power();
    return 0;
}