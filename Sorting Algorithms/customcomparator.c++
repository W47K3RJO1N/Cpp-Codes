#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<int , int> p1 , pair<int , int> p2) {
    if(p1.second < p2.second) return true;

    if(p1.second > p2.second) return false;
    if(p1.first < p2.first) return true;
    else return false;



}
int main()
{

    vector<pair<int , int>> p = {{1 , 2},{2 , 2}, { 3 , 2 }};

    sort(p.begin(), p.end(), comparator);

    for (auto val : p) {
        cout << val.first << " " << val.second << endl;

    }
    cout << endl;
    return 0;
}