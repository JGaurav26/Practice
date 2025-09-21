#include<stdio.h>

void BinarySearch()
{
    int n=0;
    printf("Enter the total number of elements in Array :: ");
    scanf("%d", &n);

    int iArr[n];
    printf("Enter the %d elements in sorted order:: ", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &iArr[i]);
    }
    printf("Sorted Array Elements -> ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", iArr[i]);
    }
    printf("\n");
    int key = 0;
    printf("Enter the element to be searched :: ");
    scanf("%d", &key);

    // LOGIC
    int low, mid, high;
    low = 0, high = n-1;

    while(low<=high)
    {
        mid = (low + high)/2;
        if(iArr[mid] == key)
        {
            printf("%d found at the Index %d \n", key, mid);
            break;
        }
        if(iArr[mid]<key)
        {
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    printf("%d not found in the given array\n", key);
}

int main()
{
    BinarySearch();
    return 0;
}