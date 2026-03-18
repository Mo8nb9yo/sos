#include <iostream>
using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    Student students[3];
    for (int i = 0; i < 3; i++) {
        cout << "NAME #" << (i+1) << ": ";
        cin >> students[i].name;
        cout << "grade: ";
        cin >> students[i].grade;
    }
    int maxIndex = 0;  
    for (int i = 1; i < 3; i++) {
        if (students[i].grade > students[maxIndex].grade) {
            maxIndex = i; 
        }
    }

    cout << "\n high grade: " 
         << students[maxIndex].name 
         << " (" << students[maxIndex].grade << ")" << endl;

    //seredni ball
    
 double sum = students[0].grade;
    for (int i = 1; i < 3; i++) {
        if (students[i].grade > students[maxIndex].grade) {
            maxIndex = i;
        }
        sum += students[i].grade; 
    }

    double average = sum / 3;
         << " (" << students[maxIndex].grade << ")" << endl;

    cout << "serrdni grade: " << average << endl;

    return 0;
}