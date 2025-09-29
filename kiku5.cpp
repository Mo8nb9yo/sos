#include <iostream>
#include <vector>
#include <iomanip> // setw, setfill
using namespace std;

int main() {
    int count = 0;
    vector<string> examples;
    examples.reserve(10);

    for (int i = 0; i <= 999999; ++i) {
        int x = i;
        int d0 = x % 10; x /= 10;
        int d1 = x % 10; x /= 10;
        int d2 = x % 10; x /= 10;
        int d3 = x % 10; x /= 10;
        int d4 = x % 10; x /= 10;
        int d5 = x % 10; // x/=10 not needed further

        int sumFirst3 = d5 + d4 + d3; // перші три (ліві)
        int sumLast3  = d2 + d1 + d0; // останні три (праві)

        if (sumFirst3 == sumLast3) {
            ++count;
            if ((int)examples.size() < 10) {
                ostringstream oss;
                oss << setw(6) << setfill('0') << i;
                examples.push_back(oss.str());
            }
        }
    }

    cout << "Кількість щасливих квитків: " << count << "\n";
    cout << "Декілька прикладів: ";
    for (auto &s : examples) cout << s << " ";
    cout << "\n";
    return 0;
}
