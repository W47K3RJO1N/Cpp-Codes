#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;   
        }
    }
    return -1;  
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, key);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
