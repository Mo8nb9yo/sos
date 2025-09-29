#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Введіть число: ";
    if (!(cin >> x)) return 0;
    if (x > 0) cout << "Число додатнє\n";
    else if (x < 0) cout << "Число від'ємне\n";
    else cout << "Число рівне нулю\n";
    return 0;
}
