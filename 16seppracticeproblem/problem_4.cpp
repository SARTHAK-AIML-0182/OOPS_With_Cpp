#include <iostream>
#include <string>
using namespace std;
class University {
private:
    string universityName;
public:
    University(string name) {
        universityName=name;
    }
    class Department {
    private:
        string departmentName;
        int studentCount;
    public:
        Department(string name, int count) {
            departmentName=name;
            studentCount=count;
        }
        void displayDetails(University& uni) {
            cout<<uni.universityName<<"\n";
            cout<<departmentName<<"\n";
            cout<<studentCount<<"\n";
        }
    };
};
int main() {
    University myUni("Tech Global University");
    University::Department myDept("Computer Science", 850);
    myDept.displayDetails(myUni);
    return 0;
}