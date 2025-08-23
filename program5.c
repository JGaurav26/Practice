// PS - Pass Structure to Function (By Value and By Reference)

#include<stdio.h>

// Define structure
struct Student
{
    int rollNo;
    char name[30];
    float marks;
};

// Function to display student details (pass by value)
void displayByValue(struct Student s)
{
    printf("\n[By Value]\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name   : %s\n", s.name);
    printf("Marks  : %.2f\n", s.marks);
}

// Function to update marks (pass by reference)
void updateByReference(struct Student *s)
{
    s->marks += 5.0; // Add grace marks
}

int main()
{
    struct Student s1 = {101, "GoJo", 85.5};

    // Pass by value
    displayByValue(s1);

    // Pass by reference
    updateByReference(&s1);

    printf("\nAfter Updating (By Reference)\n");
    displayByValue(s1);

    return 0;
}