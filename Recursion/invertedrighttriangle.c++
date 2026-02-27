#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {
    if (n == 0) return;
    cout << "* ";
    printStar(n - 1);
}

void triangle(int n) {
    if (n == 0) return;
    printStar(n);
    cout << endl;
    triangle(n - 1);
}

int main() {
    triangle(4);
}
