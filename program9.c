// PS - Structure with Pointer Members

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int roll;
    char *name;   // pointer variable
};

int main() {
    struct Student s1;

    s1.roll = 101;

    // allocate memory for name
    s1.name = (char*)malloc(20 * sizeof(char));
    strcpy(s1.name, "Anuj");

    printf("Roll No: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);

    // free allocated memory
    free(s1.name);

    return 0;
}