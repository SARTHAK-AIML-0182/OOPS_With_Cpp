#include<bits/stdc++.h>
using namespace std;
class Student {
public:
void display(int roll,string name,int grade){
    cout<<roll<<endl;
    cout<<name<<endl;
    cout<<grade<<endl;
}
void display(int roll,string name,float grade){
    cout<<roll<<endl;
    cout<<name<<endl;
    cout<<grade<<endl;
}
void display(){
    int roll,grade;
    string name;
    cin>>roll>>name>>grade;
    cout<<roll<<endl;
    cout<<name<<endl;
    cout<<grade<<endl;
}
};
int main(){
    Student s;
    s.display();
    s.display(0172,"Sarthak",90.00);
    s.display(0172,"Sarthak",90);
    return 0
}