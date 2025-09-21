// PS - Find Duplicate Elements in an Array

#include<stdio.h>

void Duplicate(int iArr[], int iNo)
{
    printf("Duplicate Elements are :: ");
    int found = 0;

    for(int i = 0; i<iNo; i++)
    {
        for(int j = i+1; j <iNo; j++)
        {
            if(iArr[i] == iArr[j]){
                printf("%d \t", iArr[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found){
        printf("None \n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter the total number of elements in the array: ");
    scanf("%d", &iNo);

    int iArr[iNo];
    printf("Enter %d elements:\n", iNo);

    for (int i = 0; i < iNo; i++)
    {
        scanf("%d", &iArr[i]);
    }

    Duplicate(iArr, iNo);

    return 0;
}