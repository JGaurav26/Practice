// PS - Sort an Array in Ascending Order (Bubble Sort)


#include<stdio.h>

void bubbleSort(int iArr[], int iNo)
{
    int temp = 0;

    for(int i = 0; i<iNo-1; i++)
    {
        for(int j = 0; j<iNo-1; j++)
        {
            if(iArr[j] > iArr[j+1]){
                temp = iArr[j];
                iArr[j] = iArr[j+1];
                iArr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int iNo;

    printf("Enter the total number of elements :: ");
    scanf("%d", &iNo);

    int iArr[iNo];

    printf("Enter the %d elements :: ", iNo);
    for(int i = 0; i < iNo; i++)
    {
        scanf("%d", &iArr[i]);
    }

    bubbleSort(iArr, iNo);

    printf("BUBBLE SORT \n");

    for(int i = 0; i<iNo; i++)
    {
        printf("%d \t", iArr[i]);
    }
    return 0;
}