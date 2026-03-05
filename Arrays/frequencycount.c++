#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 2, 3, 1, 4};
    vector<pair<int, int>> freq;

    for (int i = 0; i < arr.size(); i++) {
        bool found = false;

        for (int j = 0; j < freq.size(); j++) {   
            if (freq[j].first == arr[i]) {
                freq[j].second++;
                found = true;
                break;
            }
        }

        if (!found) {
            freq.push_back({arr[i], 1});
        }
    }

    for (auto p : freq) {
        cout << p.first << " occurs " << p.second << " times\n";
    }

    return 0;
}
