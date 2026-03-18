#include <iostream>
#include <string>
using namespace std;

struct Product {
    string name;
    double price;
    int quanity;
};

int main() {
Product G;
 cout << "name: ";
 cin >> G.name;
 cout << "price: ";
 cin >> G.price;
 cout << "quanity: ";
 cin >> G.quanity;

 double total = G.price * G.quanity;
 cout << "total + " << total;
 return 0;
}
