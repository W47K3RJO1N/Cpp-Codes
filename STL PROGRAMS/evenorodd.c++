#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    vector<pair<string,int>> result;

    int even = 0, odd = 0;

    for(int x : arr){
        if(x % 2 == 0) even++;
        else odd++;
    }

    result.push_back({"Even", even});
    result.push_back({"Odd", odd});

    for(auto &p : result){
        cout << p.first << " = " << p.second << endl;
    }

    return 0;
}
