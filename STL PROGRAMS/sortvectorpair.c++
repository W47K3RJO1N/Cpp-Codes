#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<int, int>> S;

    S.push_back({3, 20});
    S.push_back({1, 50});
    S.push_back({2, 40});

    sort(S.begin(), S.end());

    for (auto p : S) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
