// PS - Compare two structures

#include <stdio.h>
#include <string.h>

// Define Employee structure
struct Employee {
    int id;
    char name[50];
    float salary;
};

int compareEmployees(struct Employee e1, struct Employee e2) {
    // Compare ID
    if (e1.id != e2.id) 
        return 0;

    // Compare Name
    if (strcmp(e1.name, e2.name) != 0) 
        return 0;

    // Compare Salary
    if (e1.salary != e2.salary) 
        return 0;

    return 1;  // All fields matched
}

int main() {
    struct Employee emp1 = {101, "Alice", 55000.50};
    struct Employee emp2 = {101, "Alice", 55000.50};
    struct Employee emp3 = {102, "Bob", 60000.00};

    if (compareEmployees(emp1, emp2))
        printf("Employee 1 and Employee 2 are SAME\n");
    else
        printf("Employee 1 and Employee 2 are DIFFERENT\n");

    if (compareEmployees(emp1, emp3))
        printf("Employee 1 and Employee 3 are SAME\n");
    else
        printf("Employee 1 and Employee 3 are DIFFERENT\n");

    return 0;
}