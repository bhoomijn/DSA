
#include <iostream>
using namespace std;

// Prints a right-angled triangle of alternating 1s and 0s
void printBinaryTriangle(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        start = (i % 2 == 0) ? 1 : 0;
        
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        printBinaryTriangle(n);
    }
    
    return 0;
}
