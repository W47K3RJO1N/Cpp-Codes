#include <bits/stdc++.h>
using namespace std;

void vecinsert() {
    vector<int> vec = {1 ,2, 4, 5};

    vec.insert(vec.begin() + 2 , 3);
    for (int val : vec) {
        cout << val << " ";
    }

}

int main() {
    vecinsert() ;
    return 0;
}