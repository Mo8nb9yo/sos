#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    int a = 42;
    double d = 3.14159;

    string sa = to_string(a); 
    string sd_default = to_string(d); 

    
    ostringstream oss;
    oss << fixed << setprecision(3) << d; 
    string sd = oss.str(); 

    cout << "int -> string: " << sa << "\n";
    cout << "double (default) -> string: " << sd_default << "\n";
    cout << "double (formatted) -> string: " << sd << "\n";
    return 0;
}
