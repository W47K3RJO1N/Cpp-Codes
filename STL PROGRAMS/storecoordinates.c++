#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> points;

    points.push_back({2, 3});
    points.push_back({4, 5});
    points.push_back({1, 7});

    for (auto point : points) {
        cout << "(" << point.first << "," << point.second << ")" << endl;
    }
    return 0;
}
