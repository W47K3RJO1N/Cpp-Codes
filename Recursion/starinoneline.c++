#include <bits/stdc++.h>
using namespace std;

void printStar(int n) {
    if (n == 0) return;
    cout << "* ";
    printStar(n - 1);
}

int main() {
    printStar(5);
}
