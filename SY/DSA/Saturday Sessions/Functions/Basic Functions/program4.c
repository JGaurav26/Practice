// PS - program to swap two numbers

#include<stdio.h>

void cbvswap(int iNo1, int iNo2)
{
    printf("-----------------------------------\n");
    printf("CALL BY VALUE \n");
    printf("Before swapping :: \n");

    printf("Number 1 -> %d \n", iNo1);
    printf("Number 2 -> %d \n", iNo2);

    int temp = 0;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;

    printf("After Swapping :: \n");
    printf("Number 1 -> %d \n", iNo1);
    printf("Number 2 -> %d \n", iNo2);
    printf("-----------------------------------\n");
}

void cbrswap(int *iNo1, int *iNo2)
{
    printf("-----------------------------------\n");
    printf("CALL BY ADDRESS / REFERENCE \n");
    printf("Before swapping :: \n");

    printf("Number 1 -> %d \n", *iNo1);
    printf("Number 2 -> %d \n", *iNo2);

    int temp = 0;
    temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = temp;

    printf("After Swapping :: \n");
    printf("Number 1 -> %d \n", *iNo1);
    printf("Number 2 -> %d \n", *iNo2);
    printf("-----------------------------------\n");
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter Number 1 :: ");
    scanf("%d", &iNo1);
    printf("Enter Number 2 :: ");
    scanf("%d", &iNo2);

    cbvswap(iNo1, iNo2);
    cbrswap(&iNo1, &iNo2);

    return 0;
}