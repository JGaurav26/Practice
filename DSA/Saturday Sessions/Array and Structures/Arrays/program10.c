// PS - Search for an Element in an Array (Linear Search)
#include<stdio.h>

void lSearch(int iArr[], int iNo)
{
    int key, found = 0;
    printf("Enter the element to be search :: \n");
    scanf("%d", &key);

    for (int i = 0; i < iNo; i++)
    {
        if (iArr[i] == key)
        {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break; 
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", key);
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

    lSearch(iArr, iNo);

    return 0;
}