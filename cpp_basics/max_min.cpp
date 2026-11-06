
// functions
// find maximum and minimum of two numbers

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int num1, num2;
    cin >> num1 >> num2;

    cout << "Maximum: " << max(num1, num2) << endl;
    cout << "Minimum: " << min(num1, num2) << endl;

    return 0;
}
