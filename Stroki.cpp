#include <iostream>
#include <string>    
using namespace std;

int main() {
    string text;       
    cout << "trebya stroka: ";
    getline(cin, text);
    cout << " stroka: " << text.length() << endl;

    return 0;
}
