// PS - Program to check wheter a given string is Palindrome

#include <stdio.h>
#include <string.h>

void checkPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    int flag = 1; // assume palindrome

    while (start < end) {
        if (str[start] != str[end]) {
            flag = 0; // not palindrome
            break;
        }
        start++;
        end--;
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    checkPalindrome(str);

    return 0;
}