// PS - Copy One Array to another

#include <stdio.h>

void cpyArr()
{
    int iArr[5] = {2, 4, 6, 8, 10};   // original array
    int copy[5];                      // destination array

    // Copying elements one by one
    for (int i = 0; i < 5; i++)
    {
        copy[i] = iArr[i];
    }

    printf("Original Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", iArr[i]);
    }

    printf("\nCopied Array:   ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", copy[i]);
    }

    printf("\n");
}

int main()
{
    cpyArr();
    return 0;
}