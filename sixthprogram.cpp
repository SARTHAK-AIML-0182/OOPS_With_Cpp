#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        marks = 0;
        cout << "Default constructor called" << endl;
    }

    // 2. Constructor with Parameter
    Student(string n, int m) {
        name = n;
        marks = m;
        cout << "Parameterized constructor called for " << name << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        name = s.name;
        marks = s.marks;
        cout << "Copy constructor called for " << name << endl;
    }

    // 4. Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    Student s1;                  // calls Default Constructor
    Student s2("Sarthak", 90);    // calls Parameterized Constructor
    Student s3 = s2;             // calls Copy Constructor

    return 0;
}