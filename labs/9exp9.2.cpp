/*9.2 Vehicle Service Record System
A vehicle service centre needs to store the details of one vehicle and a run-time list of the services performed on it. A Vehicle object will be created dynamically. The Vehicle class will manage a dynamic array of ServiceRecord objects and calculate the total service bill.
Problem Requirements
1.  Create a ServiceRecord class with service name and service cost.
2.  Create a Vehicle class with vehicle number, owner name, service count, and a pointer to ServiceRecord.
3.  Allocate the ServiceRecord array dynamically inside the Vehicle constructor.
4.  Create the Vehicle object dynamically in main().
5.  Display every service and calculate the total bill.
6.  Use destructors and delete to release all allocated memory.*/

#include<bits/stdc++.h>
using namespace std;
class ServiceRecord {
public:
string serviceName;
float cost;
void read(){
    cout<<"Enter service name and cost: ";
    cin>>serviceName>>cost;
}
void display(){
    cout<<"Service: "<<serviceName<<endl;
    cout<<"Cost: "<<cost<<endl;
}
};
class Vehicle {
public:
string vehicleNo;
string owner;
int count;
ServiceRecord *services;
Vehicle(string v,string o,int n){
    vehicleNo=v;
    owner=o;
    count=n;
    services=new ServiceRecord[count];
}
void readServices(){
    for(int i=0;i<count;i++){
        services[i].read();
    }
}
void display(){
    cout<<"\nVehicle No: "<<vehicleNo<<endl;
    cout<<"Owner: "<<owner<<endl;
    cout<<"Services Performed"<<endl;
    for(int i=0;i<count;i++){
        services[i].display();
    }
}
float totalBill(){
    float total=0;
    for(int i=0;i<count;i++){
        total+=services[i].cost;
    }
    return total;
}
~Vehicle(){
    delete[] services;
    cout<<"\nVehicle destructor called, services memory released"<<endl;
}
};
int main(){
    string v,o;
    int n;
    cout<<"Enter vehicle number: ";
    cin>>v;
    cout<<"Enter owner name: ";
    cin>>o;
    cout<<"Enter number of services: ";
    cin>>n;
    Vehicle *veh=new Vehicle(v,o,n);
    veh->readServices();
    veh->display();
    cout<<"\nTotal Bill: "<<veh->totalBill()<<endl;
    delete veh;
    return 0;
}