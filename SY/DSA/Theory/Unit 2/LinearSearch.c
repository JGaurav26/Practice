#include<stdio.h>

void LinearSearch()
{
    int n=0;
    printf("Enter the total number of elements in Array :: ");
    scanf("%d", &n);

    int iArr[n];
    printf("Enter the %d elements :: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &iArr[i]);
    }
    printf("Array Elements -> ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", iArr[i]);
    }
    printf("\n");
    int key = 0;
    printf("Enter the element to be searched :: ");
    scanf("%d", &key);

    for(int i=0; i<n; i++)
    {
        if(iArr[i] == key)
        {
            printf("%d found at Index %d \n", key, i);
            return;
        }
    }
    printf("%d not found in the given array\n", key);
}

int main()
{
    LinearSearch();
    return 0;
}