// PS - Find the sum of array elements

#include<stdio.h>

void SumArr()
{
    int iSum = 0;
    int iArr[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i<5; i++)
    {
        printf("%d \t", iArr[i]);
        iSum += iArr[i];
    }
    printf("\n");
    printf("The sum of the given array elements is :: %d \n", iSum);
}

int main()
{
    SumArr();
    return 0;
}

