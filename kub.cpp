#include <iostream>
using namespace std;

int main() {
    int width;      int height;  
    cout << "Type Weiht ";
    cin >> width;

    cout << " Type heiht ";
    cin >> height;

         for (int H = 0; H < height; H++) {          
	 for (int W = 0; W < width; W++) {              
	  cout << "*";
        }
        cout << endl;     }

    return 0;
}
