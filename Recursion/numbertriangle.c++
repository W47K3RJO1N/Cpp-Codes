#include <bits/stdc++.h>
using namespace std;

void printNum(int i, int n) {
    if (i > n) return;
    cout << i << " ";
    printNum(i + 1, n);
}

void pattern(int n) {
    if (n == 0) return;
    pattern(n - 1);
    printNum(1, n);
    cout << endl;
}

int main() {
    pattern(4);
}
