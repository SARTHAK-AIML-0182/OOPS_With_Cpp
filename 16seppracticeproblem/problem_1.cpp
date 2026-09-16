#include <bits/stdc++.h>
using namespace std;
class Product{
    public:
    int productId;
    string productName;
    int productPrice;

    Product(int pid, string pn,int pp){
        productId=pid;
        productPrice=pp;
        productName=pn;
    }
    Product comparePrice(const Product &p) const{
        if(this->productPrice > p.productPrice){
            return *this;
        }else{
            return p;
        }
    }
};
int main(){
    Product p1(101,"Apple",200);
    Product p2(102,"Banana",600);
    Product Expensive=p1.comparePrice(p2);
    cout<<"Product Id : "<<Expensive.productId<<endl;
    cout<<"Product Name : "<<Expensive.productName<<endl;
    cout<<"Product Price : "<<Expensive.productPrice;
}