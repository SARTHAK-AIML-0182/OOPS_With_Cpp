#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;
public:
    Student(int r, int m)
    {
        rollNo = r;
        marks = m;
    }

    friend class Teacher;
};

class Teacher
{
public:
    void checkResult(Student s)
    {
        if (s.marks >= 40)
            cout << "Student " << s.rollNo << ": Pass";
        else
            cout << "Student " << s.rollNo << ": Fail";
    }
};

int main()
{
    Student s(101, 72);

    Teacher t;
    t.checkResult(s);

    return 0;
}
