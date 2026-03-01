#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,4,5,6,-3};
    int mn = INT_MAX;
    int n = 7;

    for (int i = 0 ; i < n ; i++) {
        if(arr[i] < mn) mn = arr[i];
    }
    cout << "smallest element: " << mn;
}