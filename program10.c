// PS - Store and Display Book Information using Structures

#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];   // array of structures

    // Input book details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);   // read string with spaces
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display book details
    printf("\n--- Book Information ---\n");
    for (i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}