#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<pair <int , int>> RM;

    RM.push_back({1 , 80});
    RM.push_back({2 , 90});
    RM.push_back({3 , 100});

    for( auto s : RM) {
        cout << "Roll no: " << s.first << " " << "Marks: " << s.second << endl;
    }
    return 0;

}
