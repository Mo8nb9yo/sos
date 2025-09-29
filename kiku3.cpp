#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    const char *s = "hello world";
    if (s == nullptr) {
        cout << "unknown (nullptr)\n";
        return 0;
    }
    cout << "lenght (strlen): " << strlen(s) << "\n";

    size_t len = 0;
    while (s[len] != '\0') ++len;
    cout << "lenght (manual): " << len << "\n";
    return 0;
}
