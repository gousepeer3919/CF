#include <iostream>
#include <string>

using namespace std;

string convertTo12HourFormat(const string& time24) {
    int hours = stoi(time24.substr(0, 2));
    int minutes = stoi(time24.substr(3, 2));

    string period = (hours < 12) ? "AM" : "PM";
    if (hours == 0) {
        hours = 12;
    } else if (hours > 12) {
        hours -= 12;
    }

    return ((hours < 10) ? "0" + to_string(hours) : to_string(hours)) + ":" 
           + ((minutes < 10) ? "0" + to_string(minutes) : to_string(minutes)) + " " + period;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string time24;
        cin >> time24;
        cout << convertTo12HourFormat(time24) << endl;
    }
    return 0;
}
