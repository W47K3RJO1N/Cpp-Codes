#include <bits/stdc++.h>
using namespace std;

void printName(int n) {
    if (n == 0) return;
    cout << "Himanshu\n";
    printName(n - 1);
}

int main() {
    printName(3);
}
