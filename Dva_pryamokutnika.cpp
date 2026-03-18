#include <iostream> 
using namespace std;

struct Rectangle {
    double width;
    double height;
};
int man() {
    Rectangle N1, M2;
    cout << "width: ";
    cin >> N1.width;
    cout << "height: ";
    cin >> N1.height;

    cout << "width: ";
    cin >> M2.width;
    cout << "height: ";
    cin >> M2.height;
if (N1.width * N1.height > M2.height * M2.width)
cout << "Rectangle 1 big (: " << N1.height * N1.width << ")" << endl;

else if (M2.width * M2.height > N1.height * N1.width)
cout << "Rectangle 2 big (: " << M2.height * M2.width << ")" << endl;
else 
cout << "Both big (:" << N1.height * N1.width << M2.height * M2.width << ")" << endl;

    return 0;
}