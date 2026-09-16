//Call by value and Call by Reference
#include<iostream>
using namespace std;
void data1(int x){
    x=50;
    cout<<x;
}
void data2(int &x){
    x=50;
    cout<<x;
}

int main(){
    int m=100;
    cout<<"Call by value : ";
    data1(m);
    cout<<" "<<m;
    cout<<endl;
    cout<<"Call by Reference : ";
    data2(m);
    cout<<" "<<m;
    cout<<endl; 
}