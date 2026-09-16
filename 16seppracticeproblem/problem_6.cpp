#include <iostream>
#include <string>
using namespace std;
class StudentResult {
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;
    static int totalStudents;
public:
    StudentResult(int r, string n, float m1, float m2, float m3) {
        rollNo=r;
        name=n;
        marks1=m1;
        marks2=m2;
        marks3=m3;
        totalStudents++;
    }
    ~StudentResult() {
        cout<<"Object destroyed for student: "<<name<<"\n";
    }
    static void showTotalStudents(){
        cout<<"Total Students: "<<totalStudents<<"\n";
    }
    friend class ResultAnalyzer;
};
int StudentResult::totalStudents=0;
class ResultAnalyzer {
public:
    void analyze(const StudentResult& student) {
        float total=student.marks1+student.marks2+student.marks3;
        float percentage=(total/300.0f)*100.0f;
        cout<<"Student: "<<student.name <<" (Roll No: "<<student.rollNo<<")\n";
        cout<<"Total Marks: "<<total<<"/300\n";
        cout<<"Percentage: "<<percentage<<"%\n";
        if(percentage>=40.0f) {
            cout<<"Result: Pass\n\n";
        }else{
            cout<<"Result: Fail\n\n";
        }
    }
};
int main() {
    StudentResult::showTotalStudents();
    {
        StudentResult s1(101, "Akriti", 85.0f, 90.0f, 78.0f);
        StudentResult s2(102, "Bobby", 35.0f, 40.0f, 30.0f);
        StudentResult::showTotalStudents();
        ResultAnalyzer analyzer;
        analyzer.analyze(s1);
        analyzer.analyze(s2);
    }
    return 0;
}