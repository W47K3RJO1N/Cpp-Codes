#include <bits/stdc++.h>
using namespace std;

void printSame(int n, int times) {
    if (times == 0) return;
    cout << n << " ";
    printSame(n, times - 1);
}

void pattern(int n) {
    if (n == 0) return;
    pattern(n - 1);
    printSame(n, n);
    cout << endl;
}

int main() {
    pattern(4);
}
