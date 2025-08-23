// PS - Reverse an Array

#include<stdio.h>

void reverseArray(int iArr[],int iNo)
{
    int start = 0, end = iNo-1;

    while(start<end)
    {
        int temp = iArr[start];
        iArr[start] = iArr[end];
        iArr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int iArr[5] = {1, 2, 3, 4, 5};

    printf("\nOriginal Array :: ");
    for(int i = 0; i<5; i++)
    {
        printf("%d \t", iArr[i]);
    }

    reverseArray(iArr, 5);

    printf("\nReversed Array :: ");
    for(int i = 0; i<5; i++)
    {
        printf("%d \t", iArr[i]);
    }
    return 0;
}