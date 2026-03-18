#include <iostream>
#include <Struct>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t;

    cout << "hours: ";
    cin >> t.hours;

    cout << "minutes: ";
    cin >> t.minutes;

    cout << "seconds: ";
    cin >> t.seconds;

    int total = t.hours * 3600 + t.minutes * 60 + t.seconds;

    cout << "total seconds = " << total;

    return 0;
}