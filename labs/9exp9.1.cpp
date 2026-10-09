/*9.1 Student Result Management System
A college wants to store student records at run time because the number of students is not known in advance. The program should create a dynamic array of Student objects, display every record, and identify the student with the highest marks using a pointer to an object.
Problem Requirements
1.  Create a Student class with roll number, name, and marks.
2.  Provide methods to read and display student information.
3.  Ask the user for the number of students.
4.  Create a dynamic array of Student objects.
5.  Use a Student pointer to find the student with the highest marks.
6.  Release the dynamically allocated array before the program ends.*/

#include<bits/stdc++.h>
using namespace std;
class Student {
public:
int roll;
string name;
float marks;
void read(){
    cout<<"Enter roll, name, marks: ";
    cin>>roll>>name>>marks;
}
void display(){
    cout<<"Roll: "<<roll<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
}
};
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student *s=new Student[n];
    for(int i=0;i<n;i++){
        s[i].read();
    }
    cout<<"\nAll Records"<<endl;
    for(int i=0;i<n;i++){
        s[i].display();
        cout<<endl;
    }
    Student *top=s;
    for(Student *p=s;p<s+n;p++){
        if(p->marks>top->marks){
            top=p;
        }
    }
    cout<<"Student with highest marks"<<endl;
    top->display();
    delete[] s;
    return 0;
}
