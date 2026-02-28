#include <bits/stdc++.h>
using namespace std;

int main () {
    int arr[] = {1,2,3,334,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = arr[0];
    for (int i = 1 ; i < n ; i++) {
        mx = min(mx , arr[i]);
    }
    cout << mx;
return 0;
}
