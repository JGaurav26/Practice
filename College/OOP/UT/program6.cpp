// Construct a structured C++ program that uses user-defined functions, loops, and conditionals to manage a student grading system.

#include<iostream>
using namespace std;

class GradeSys {
public:
    void getGrades() {
        int n, marks;
        cout << "Enter total number of students: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cout << "Enter marks of student " << i << ": ";
            cin >> marks;

            char grade;
            if (marks >= 90) grade = 'A';
            else if (marks >= 75) grade = 'B';
            else if (marks >= 50) grade = 'C';
            else grade = 'F';

            cout << "Grade: " << grade << "\n";
        }
    }
};

int main() {
    GradeSys g;
    g.getGrades();
    return 0;
}
