// PS - Find the Maximum and Minimum Element in the Array

#include<stdio.h>

void MaxMin(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
}

int main()
{
    int iArr[5] = {10, 20, 5, 40, 15};
    MaxMin(iArr, 5);

    return 0;
}