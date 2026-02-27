#include <bits/stdc++.h>
using namespace std;

void space(int n) {
    if (n == 0) return;
    cout << " ";
    space(n - 1);
}

void star(int n) {
    if (n == 0) return;
    cout << "* ";
    star(n - 1);
}

void pyramid(int n, int i) {
    if (i > n) return;
    space(n - i);
    star(i);
    cout << endl;
    pyramid(n, i + 1);
}

int main() {
    pyramid(3, 1);
}
