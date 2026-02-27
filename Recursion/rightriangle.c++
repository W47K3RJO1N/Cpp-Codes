#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {
    if (n == 0) return;
    cout << "* ";
    printStar(n - 1);
}

void triangle(int n) {
    if (n == 0) return;
    triangle(n - 1);
    printStar(n);
    cout << endl;
}

int main() {
    triangle(4);
}
