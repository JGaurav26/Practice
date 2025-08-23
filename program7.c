// PS - Structure with Array Member (e.g., storing 5 subject marks)

#include <stdio.h>

struct Student {
    char name[20];
    int rollNo;
    int marks[5];   // Array member to store 5 subject marks
};

int main() {
    struct Student s1 = {"GoJo", 101, {85, 90, 78, 88, 92}};
    
    printf("Student Name : %s\n", s1.name);
    printf("Roll No      : %d\n", s1.rollNo);

    printf("Marks in 5 Subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i+1, s1.marks[i]);
    }

    return 0;
}