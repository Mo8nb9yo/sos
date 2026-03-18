#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time N1, M2;
    cout << "hours: ";
    cin >> N1.hours;

    cout << "minutes: ";
    cin >> N1.minutes;

    cout << "seconds: ";
    cin >> N1.seconds;

    cout << "hours: ";
    cin >> M2.hours;

    cout << "minutes: ";
    cin >> M2.minutes;

    cout << "seconds: ";
    cin >> M2.seconds;

    cout << "riznica in seconds"
    << (t2.hours*3600 + t2.minutes*60 + t2.seconds)
         - (t1.hours*3600 + t1.minutes*60 + t1.seconds)
         << endl;
         return 0;
}