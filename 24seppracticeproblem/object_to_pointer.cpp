#include <iostream>
using namespace std;

class Product {
    int productId;
    string productName;
    double price;
public:
    Product(int id, string name, double p) {
        productId = id;
        productName = name;
        price = p;
    }
    double calculatePrice() {
        return price;
    }
    double calculatePrice(double discount) {
        return price - (price * discount / 100);
    }
    double calculatePrice(double discount, double delivery) {
        return price - (price * discount / 100) + delivery;
    }
    void display() {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Original Price: " << calculatePrice() << endl;
        cout << "Price after 10% discount: " << calculatePrice(10) << endl;
        cout << "Price after discount and delivery: " << calculatePrice(10, 50) << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product **products = new Product*[n];
    for(int i = 0; i < n; i++) {
        int id;
        string name;
        double price;
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        products[i] = new Product(id, name, price);
    }
    for(int i = 0; i < n; i++) {
        cout << endl;
        products[i]->display();
    }
    for(int i = 0; i < n; i++)
        delete products[i];
    delete[] products;
    return 0;
}