#include <iostream>
using namespace std;

int main() {
    int H;

    cout << " Type size rombik ne parna plz: ";
    cin >> H;

    for (int rydok = 1; rydok <= H; rydok += 2) {
        for (int romb = 0; romb < H - rydok; romb++) {
            cout << " ";
        }
        for (int romb = 0; romb < rydok; romb++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int rydok = H - 2; rydok >= 1; rydok -= 2) {
              for (int romb = 0; romb< H - rydok; romb++) {
            cout << " ";
        }
        for (int romb = 0; romb < rydok; romb++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
