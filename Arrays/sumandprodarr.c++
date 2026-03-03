#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int product = 1;
    int sum = 0;
    int n = 5;

    for (int i = 0 ; i  < n; i++) {
        product = product * arr[i];
        sum = sum + arr[i];
    }
    cout << product << endl;
    cout << sum << endl;
    return 0;
}
