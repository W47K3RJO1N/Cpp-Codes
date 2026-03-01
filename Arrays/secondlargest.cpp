#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {4, 7, 8, 100, 2, 1};
    int n = 6;
    int mx = INT_MIN;
    int smx = INT_MIN;

    for(int i = 0 ; i < n; i++) {
        if(mx < arr[i]) {
            mx = arr[i];
        }
    }

    for(int i = 0; i < n; i++) {
        if(smx < arr[i] && arr[i] != mx) {
            smx = arr[i];
        }
    }
    cout << smx << " ";

}