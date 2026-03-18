#include <iostream>
using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

int main() {
    Product products[3];
    for (int i = 0; i < 3; i++) {
        cout << "Product #" << (i+1) << " name: ";
        cin >> products[i].name;
        cout << "price: ";
        cin >> products[i].price;
        cout << "quantity: ";
        cin >> products[i].quantity;
    }
    double total = 0;
    for (int i = 0; i < 3; i++) {
        total += products[i].price * products[i].quantity;
    }
    cout << "\nTotal warehouse value: " << total << endl;




    //15

    
    return 0;
}