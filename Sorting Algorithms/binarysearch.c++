#include <bits/stdc++.h>

using namespace std;

int main() {
    
    vector<int> vec = {1 , 2, 3, 4, 5};
    
    cout << binary_search(vec.begin(), vec.end() , 5) << endl; // binary search exists
    cout << binary_search(vec.begin(), vec.end(), 10) << endl; // binary search does not exist
    
    return 0;
}
