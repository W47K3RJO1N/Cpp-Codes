#include <bits/stdc++.h>
using namespace std;

void startriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;   

    }
}
// for solid rectangle pattern
// void startriangle(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << "* ";
//         }
//         cout << endl;   

//     }
// }

int main() {
    int n;
    cin >> n;
    startriangle(n);
    return 0;
}