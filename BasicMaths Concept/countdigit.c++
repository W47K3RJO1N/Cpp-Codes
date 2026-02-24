#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , last_digit ;
    int cnt = 0;
    cin >> n;

    while ( n > 0) {

        last_digit = n % 10;
        cout << last_digit << endl;

        n = n / 10;
    }
    return 0;
}
