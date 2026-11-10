

// patterns
// half diamond star pattern

#include <iostream>
using namespace std;

void halfDiamond(int n) {

    // upper triangle
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // lower triangle
    for (int i = n - 1; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;

    halfDiamond(n);

    return 0;
}
