#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int employeeId;
    string name;
    double salary;
public:
    Employee() {
        employeeId=0;
        name="None";
        salary=0.0;
    }
    Employee(int id, string n, double s) {
        employeeId=id;
        name=n;
        salary=s;
    }
    Employee(const Employee& e) {
        employeeId=e.employeeId;
        name=e.name;
        salary=e.salary;
    }
    void display() const {
        cout<<"ID: "<<employeeId<<", Name: "<<name<<", Salary: "<<salary<<"\n";
    }
    void updateSalary(double newSalary) {
        salary=newSalary;
    }
};
int main() {
    const Employee emp1(101, "Alice", 75000.0);
    emp1.display();
    Employee emp2(emp1);
    emp2.display();
    emp2.updateSalary(80000.0);
    return 0;
}