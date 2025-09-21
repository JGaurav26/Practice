// PS - Define a Structure and Access Its Members

#include<stdio.h>
#include<string.h>

struct node {
    int iData;
    float fData;
    double dData;
    char string[20];
};

int main()
{
    struct node sim;

    sim.iData = 10;
    printf("Data = %d \n", sim.iData);

    sim.fData = 10.05f;
    printf("Data = %.2f \n", sim.fData);

    sim.dData = 10.0001;
    printf("Data = %f \n", sim.dData);

    strcpy(sim.string, "aman");
    printf("Data = %s \n", sim.string);
    return 0;
}