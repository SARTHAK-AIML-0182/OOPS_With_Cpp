#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,6,7,9,2,6,7,3};
    cout<<"Range Based : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"With Auto : ";
    for(auto val:v){
        cout<<val<<" ";
    }
}