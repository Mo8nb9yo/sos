#include <iostream> 
using namespace std;

struct Rectangle {
    double width;
    double height;
};
int man() {
    Rectangle O;
    cout << "width: ";
    cin >> O.width;
    cout << "height: ";
    cin >> O.height;

    cout << "Plosha: " << O.width * O.height << emdl;
    cout << "perimiter: " 2 * (O.width + O.height) << endl;
    return 0;
}


