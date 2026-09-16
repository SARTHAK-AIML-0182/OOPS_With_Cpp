#include <iostream>
using namespace std;

//Inline Function

inline int add(int a,int b){
    int c=a+b;
    return c;
}

//Default Function

void data(string name="Student"){
    cout<<"Hi, "<<name<<endl;
}


int main (){
    int d=10;
    int e=20;
    cout<<"----Inline Function----"<<endl;
    cout<<add(d,e)<<endl;
    cout<<add(30,40)<<endl;
    cout<<endl;

    cout<<"----Default Argument----"<<endl;
    cout<<"With argument : ";data("Sarthak");
    cout<<"Default argument : ";data();


}