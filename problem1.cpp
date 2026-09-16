#include <bits/stdc++.h>
using namespace std;
class Product {
    public:
    int ProductId;
        string name;
        int price;
        
        Product(string n, int id, int p) {
            ProductId = id;
            name = n;
            price = p;
        }

        } ;
        Product ComparePrice(const Product p, const Product q) {
            if (p.price > q.price) {
                return p;
            } else {
                return q;
            }
        }
        int main(){
            Product p("Product1", 1, 100);
            Product q("Product2", 2, 200);
            Product expensiveProduct = ComparePrice(p, q);
            cout << "The more expensive product is: " << expensiveProduct.name << endl;
            cout << "The product ID is: " << expensiveProduct.ProductId << endl;
            cout << "The product price is: " << expensiveProduct.price << endl;
            return 0;
        }