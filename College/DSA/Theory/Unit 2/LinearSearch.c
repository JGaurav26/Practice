#include<stdio.h>

void LinearSearch()
{
    int n=0;

    printf("Enter the total number of array elements :: ");
    scanf("%d", &n);

    int iArr[n];

    printf("Enter %d number of elements ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",  &iArr[i]);
    }

    printf("Array Elements -> ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", iArr[i]);
    }
    printf("\n");

    int key;
    printf("Enter the number to be searched :: ");
    scanf("%d", &key);

    for(int i =0; i<n; i++)
    {
        if(iArr[i] == key)
        {
            printf("Element found at Index  %d \n", i);
            return;
        } 
    }

    printf("Element not found in the array\n");
}

int main()
{
    LinearSearch();

    return 0;
}