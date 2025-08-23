// PS - program to check if a number is prime

#include<stdio.h>

void isPrime(int iNo)
{
    if(iNo<=1){
        printf("%d is NOT PRIME \n", iNo);
    }

    for(int i = 2; i<iNo; i++)
    {
        if(iNo % i == 0){
            printf("%d is NOT PRIME \n", iNo);
            break;
        } else{
            printf("%d is a PRIME number \n", iNo);
            break;
        }
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number :: ");
    scanf("%d", &iNo);

    isPrime(iNo);

    return 0;
}