#include <iostream>
#include <cstring> // для strlen
using namespace std;

int main() {
    const char *s = "Привіт, світ!";
    if (s == nullptr) {
        cout << "Рядок пустий (nullptr)\n";
        return 0;
    }
    cout << "Довжина (strlen): " << strlen(s) << "\n";

    // Альтернатива: ручний підрахунок
    size_t len = 0;
    while (s[len] != '\0') ++len;
    cout << "Довжина (ручний підрахунок): " << len << "\n";
    return 0;
}
