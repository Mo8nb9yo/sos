#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    int a = 42;
    double d = 3.14159;

    string sa = to_string(a); // "42"
    string sd_default = to_string(d); // може дати "3.141590"

    // Краще — ostringstream для контролю точності
    ostringstream oss;
    oss << fixed << setprecision(3) << d; // 3 знаки після коми
    string sd = oss.str(); // "3.142"

    cout << "int -> string: " << sa << "\n";
    cout << "double (default) -> string: " << sd_default << "\n";
    cout << "double (formatted) -> string: " << sd << "\n";
    return 0;
}
