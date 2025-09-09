// Write a c++ program to check the given string is palindrome or not

#include<iostream>
#include<string>
using namespace std;

class sPalindrome {
public:
    string str1;

    void palindrome() {
        cout << "Enter a string: ";
        cin >> str1;

        int n = str1.length();
        bool isPalindrome = true;

        // Check characters from both ends
        for (int i = 0; i < n / 2; i++) {
            if (str1[i] != str1[n - i - 1]) {
                isPalindrome = false;
                break;
            }
        }

        cout << "String = " << str1 << endl;
        if (isPalindrome) {
            cout << "The string is a Palindrome." << endl;
        } else {
            cout << "The string is NOT a Palindrome." << endl;
        }
    }
};

int main() {
    sPalindrome sp;
    sp.palindrome();
    return 0;
}
