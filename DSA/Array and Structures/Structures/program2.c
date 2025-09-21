// PS - Store and Display Information of a Student

#include<stdio.h>
#include<string.h>

struct node {
    int iRollno;
    float fCgpa;
    char name[20];
};

int main()
{
    struct node sim;

    sim.iRollno = 154;
    printf("Student Roll No = %d \n", sim.iRollno);

    sim.fCgpa = 9.59f;
    printf("Student CGPA = %.2f \n", sim.fCgpa);

    strcpy(sim.name, "Gaurav");
    printf("Name of Student = %s \n", sim.name);
    return 0;
}