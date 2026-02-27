#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    if (n == 0) return;
    cout << "*\n";
    pattern(n - 1);
}

int main() {
    pattern(5);
}
