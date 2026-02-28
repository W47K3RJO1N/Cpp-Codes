#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 30, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = arr[0];
    for (int i = 1; i < n ; i++) {
        // if(mx < arr[i]) 
        // mx = arr[i];
        mx = max(mx , arr[i]);
    }
    cout << mx;
}