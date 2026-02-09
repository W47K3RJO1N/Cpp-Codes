#include <bits/stdc++.h>
using namespace std;

void popback() {

    vector<int> vec1 = { 1, 2, 4, 5, 7, 9};

    vector<int> vec2 (vec1);
   

    for (int val : vec2) {
        cout << val << " ";
    }
    cout << endl;

    // cout << " front " << vec.front() << endl;
    // cout << " back " << vec.back() << endl;

}

int main () {
    popback();
    return 0;
}