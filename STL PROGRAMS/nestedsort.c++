#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, pair<int, string>>> students;

    students.push_back({90, {20, "Rahul"}});
    students.push_back({85, {19, "Amit"}});
    students.push_back({90, {18, "Rohan"}});

    sort(students.begin(), students.end(), greater<>());

    for (auto &s : students) {
        cout << s.second.second << " ";
        cout << s.first << " ";
        cout<< s.second.first << endl;
    }

    return 0;
}
