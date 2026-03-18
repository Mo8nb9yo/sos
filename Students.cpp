#include <iostream>
using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    Student students[3];

    // Зчитуємо дані
    for (int i = 0; i < 3; i++) {
        cout << "Nane student #" << (i+1) << ": ";
        cin >> students[i].name;
        cout << "grade: ";
        cin >> students[i].grade;
    }

   
    cout << "\n Students:\n";
    cout << "Name Grade\n";
    for (int i = 0; i < 3; i++) {
        cout << students[i].name << " " << students[i].grade << endl;
    }

    return 0;
}