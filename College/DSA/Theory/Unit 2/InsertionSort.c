#include<stdio.h>

void InsertionSort()
{
    int n;
    printf("Enter the total number of elements in the Array :: ");
    scanf("%d", &n);

    int iArr[n];
    printf("Enter the Array elements :: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &iArr[i]);
    }
    printf("Array elements before the sorting -> ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", iArr[i]);
    }
    printf("\n");

    // Insertion sort logic
    for(int i=1; i<n; i++)
    {
        int key = iArr[i];
        int j = i-1;

        while(j>=0 && iArr[j]>key)
        {
            iArr[j+1] = iArr[j];
            j--;
        }
        iArr[j+1] = key;
    }
    printf("Array elements before the sorting -> ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", iArr[i]);
    }
}

int main()
{
    InsertionSort();

    return 0;
}