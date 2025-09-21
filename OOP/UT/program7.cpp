#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void getData() {
        cin >> roll >> name;
    }

    void display() {
        cout << roll << " " << name << endl;
    }
};

int main() {
    Student classroom[3];

    for (int i = 0; i < 3; i++) {
        classroom[i].getData();
    }

    for (int i = 0; i < 3; i++) {
        classroom[i].display();
    }

    return 0;
}
