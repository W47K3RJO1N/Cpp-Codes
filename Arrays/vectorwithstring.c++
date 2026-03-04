#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<string, int>> players;

    players.push_back({"Rohit", 100});
    players.push_back({"Virat", 120});

    for (auto p : players) {
        cout << p.first << " scored " << p.second << endl;
    }
    return 0;
}
