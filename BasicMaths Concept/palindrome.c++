#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int dup = n;

    int reverse_number = 0;

    while (n > 0) {

    int last_digit = n % 10;
    n = n / 10;

    // cout << last_digit << endl;
    reverse_number = (reverse_number * 10) + last_digit;
    cout << reverse_number << " ";
}

if (dup == reverse_number) {
    cout << "true" ;
}
else {
    cout << "false";
}
    return 0;

}
