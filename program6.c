// PS - Nested Structures (Structure within Structure)

#include<stdio.h>
#include<string.h>

struct Address{
    char city[20];
    int pincode;
};

struct Student {
    char name[20];
    int rollNo;
    struct Address addr; // nested structure
};

int main()
{
    struct Student s1; 

    strcpy(s1.name, "Gaurav");
    s1.rollNo = 110;
    strcpy(s1.addr.city, "Pune");
    s1.addr.pincode = 411046;

    printf("Student Name : %s\n", s1.name);
    printf("Roll No      : %d\n", s1.rollNo);
    printf("City         : %s\n", s1.addr.city);
    printf("Pincode      : %d\n", s1.addr.pincode);

    return 0;
}