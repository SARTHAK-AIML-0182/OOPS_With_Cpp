#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    double CGPA;

public:
    Student(int r, string n) {
        rollNo = r;
        name = n;
        CGPA = 0;
    }
    Student(int r, string n, double c) {
        rollNo = r;
        name = n;
        CGPA = c;
    }
    class Address {
        string city;
        string state;
    public:
        Address(string c, string s) {
            city = c;
            state = s;
        }
        void displayAddress() {
            cout << "City: " << city << endl;
            cout << "State: " << state << endl;
        }
    };
    void updateCGPA(double CGPA) {
        this->CGPA = CGPA;
    }
    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "CGPA: " << CGPA << endl;
    }
};

int main() {
    Student students[5] = {
        Student(101, "Sarthak"),
        Student(102, "Rahul", 8.5),
        Student(103, "Aman"),
        Student(104, "Riya", 9.1),
        Student(105, "Neha")
    };
    students[0].updateCGPA(8.8);
    students[2].updateCGPA(8.2);
    students[4].updateCGPA(9.3);

    for (int i = 0; i < 5; i++) {
        students[i].display();
        cout << endl;
    }
    Student::Address a1("Ghaziabad", "Uttar Pradesh");
    Student::Address a2("Delhi", "Delhi");
    a1.displayAddress();
    a2.displayAddress();
    return 0;
}