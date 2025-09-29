#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "numbr: ";
    if (!(cin >> x)) return 0;
    if (x > 0) cout << "number pluse\n";
    else if (x < 0) cout << "number minus\n";
    else cout << "number zero\n";
    return 0;
}
