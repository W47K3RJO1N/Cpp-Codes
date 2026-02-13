#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<pair<int,int>> v = {{3,4},{1,2},{5,1}};

    sort(v.begin(), v.end());

    for(auto &p : v){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
