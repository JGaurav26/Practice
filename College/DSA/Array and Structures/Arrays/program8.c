// PS - Merge Two Arrays

#include <stdio.h>

void MergeArr(int arr1[], int size1, int arr2[], int size2, int result[])
{
    int i = 0, j = 0, k = 0;

    // Copy arr1 elements
    for (i = 0; i < size1; i++)
    {
        result[k] = arr1[i];
        k++;
    }

    // Copy arr2 elements
    for (j = 0; j < size2; j++)
    {
        result[k] = arr2[j];
        k++;
    }
}

int main()
{
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Enter %d elements for first array:\n", size1);
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Enter %d elements for second array:\n", size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int result[size1 + size2];
    MergeArr(arr1, size1, arr2, size2, result);

    printf("Merged Array:\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}