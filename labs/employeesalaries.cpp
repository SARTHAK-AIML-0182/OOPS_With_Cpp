#include <iostream>
#include <vector>

using namespace std;

int main() {
    double n;
    cout << "Enter the no. of Employee : ";
    cin >> n;
    vector<double>salary(n);
    cout<<"Enter the salary of each employee :\n";
    for(auto i=0;i<n;i++){
        cin>>salary[i];
    }
    cout<<"The salaries are: ";
    auto total=0;
    auto highest=0;
    auto more_than_50=0;
    for(auto num: salary){
        cout<<num<<", ";
        total+=num;
        
        //To calculate salaries more than 50k;
        
        if(num>=50000){
            more_than_50++;
        }

        //To calculate highest salary;

        if(highest<=num){
            highest=num;
        }
    }

    cout<<"The Highest salary is : "<<highest<<endl;
    cout<<"The no. of employees with more than 50k salary are : "<<more_than_50<<endl;
    cout<<"The average salary of all the employees is : "<<total/n<<endl;
    return 0;
}