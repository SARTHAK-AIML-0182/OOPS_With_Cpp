#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int rollno;
    string name;
    double percentage;

    void input() {
        cout << "Enter Roll No: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    string grade() {
        if (percentage >= 90)
            return "A";
        else if (percentage >= 80)
            return "B";
        else if (percentage >= 70)
            return "C";
        else if (percentage >= 60)
            return "D";
        else
            return "F";
    }

    void display() {
        cout << "Student Details";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade() << endl;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}