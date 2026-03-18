#include <iostream>
using namespace std;

struct Product {
    string name;
    double price;  
};

int main() {
    Product n1, m2;
    cout << "name and price 1: ";
    cin >> n1.name >> n1.price;
    cout << " Name and price 2!: ";
    cin >> m2.name >> m2.price;
    if (n1.price > m2.price)
        cout << p1.name << "doroga." << endl;
    else if (m2.price > n1.price)
        cout << m2.name << "doroga." << endl;
    else
        cout << "oni dva dorogie ." << endl;

    return 0;
}