#include<stdio.h>

void BubbleSort()
{
    int n;
    printf("Enter the total number of elements in the Array :: ");
    scanf("%d", &n);

    int iArr[n];
    printf("Enter the Array elements -> ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &iArr[i]);
    }
    printf("Before sorting the Array elements -> ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", iArr[i]);
    }
    printf("\n");

    // Logic for the Bubble Sort
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(iArr[j]>iArr[j+1]){
                int temp = iArr[j];
                iArr[j] = iArr[j+1];
                iArr[j+1] = temp;
            }
        }
    }

    printf("After sorting the Array elements -> ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", iArr[i]);
    }
}

int main()
{
    BubbleSort();
    return 0;
}