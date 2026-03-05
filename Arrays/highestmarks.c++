#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<string, int>> students = {
        {"Rahul", 85},
        {"Amit", 90},
        {"Neha", 78}
    };

    int maxMarks = 0;
    string topper;

    for (auto &s : students) {
        if (s.second > maxMarks) {
            maxMarks = s.second;
            topper = s.first;
        }
    }

    cout << "Topper: " << topper << endl;

    return 0;
}
