// PS - Program to find the greatest of three numbers

#include<stdio.h>

void greatest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1>iNo2 && iNo1>iNo3){
        printf("%d is greater than %d and %d \n", iNo1, iNo2, iNo3);
    } else if(iNo2>iNo1 && iNo2>iNo3){
        printf("%d is greater than %d and %d \n", iNo2, iNo1, iNo3);
    } else if(iNo3>iNo1 && iNo3>iNo2){
        printf("%d is greater than %d and %d \n", iNo3, iNo2, iNo1);
    } else if(iNo1 == iNo2 == iNo3){
        printf("%d, %d and %d are equal \n", iNo1, iNo2, iNo3);
    }
}

int main()
{
    int iNo1, iNo2, iNo3;

    printf("Enter First Number :: ");
    scanf("%d", &iNo1);
    printf("Enter Second Number :: ");
    scanf("%d", &iNo2);
    printf("Enter Third Number :: ");
    scanf("%d", &iNo3);

    greatest(iNo1, iNo2, iNo3);

    return 0;
}