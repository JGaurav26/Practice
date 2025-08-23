// PS - Array of Structures for Multiple Students

#include <stdio.h>

struct Student {
    int marks[5];  
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student sArr[n];  // Array of structures

    for (int i = 0; i < n; i++) {
        printf("\nEnter marks for Student %d (5 subjects):\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &sArr[i].marks[j]);
        }
    }

    // Display marks of each student
    printf("\n---- Student Marks ----\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d ", sArr[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}