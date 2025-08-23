// PS - Count Even and Odd numbers in an Array

#include<stdio.h>

void EvenOddArr(int iArr[], int iNo)
{
    int Evencount = 0, OddCount = 0;

    for(int i = 0; i<iNo; i++)
    {
        if(iArr[i]%2 == 0){
            Evencount++;
        } else{
            OddCount++;
        }
    }

    printf("Total number of EVEN numbers in the Array is = %d \n", Evencount);
    printf("Total number of ODD numbers in the Array is = %d \n", OddCount);

}

int main()
{
    int iNo = 0;
    printf("Enter total number of Array Elements :: \n");
    scanf("%d", &iNo);
    
    printf("Enter the %d elements of the Array \n", iNo);
    int iArr[iNo];
    for(int i = 0; i<iNo; i++)
    {
        scanf("%d", &iArr[i]);
    }
    EvenOddArr(iArr, iNo);
    return 0;
}