#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half
    for(int i = 1; i <= n; i++) {
        // Left numbers
        for(int j = 1; j <= i; j++)
            cout << j;

        // Spaces
        for(int space = 1; space <= 2*(n - i); space++)
            cout << " ";

        // Right numbers
        for(int j = i; j >= 1; j--)
            cout << j;

        cout << endl;
    }

    // Lower half
    for(int i = n; i >= 1; i--) {
        // Left numbers
        for(int j = 1; j <= i; j++)
            cout << j;

        // Spaces
        for(int space = 1; space <= 2*(n - i); space++)
            cout << " ";

        // Right numbers
        for(int j = i; j >= 1; j--)
            cout << j;

        cout << endl;
    }

    return 0;
}
