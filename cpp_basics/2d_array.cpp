

#include <iostream>
using namespace std;

int main() {
    int arr[5][5];

    arr[3][0] = 8;

    cin >> arr[0][0]
        >> arr[2][2]
        >> arr[3][4]
        >> arr[4][0];

    cout << arr[0][0] << " "
         << arr[2][2] << " "
         << arr[3][4] << " "
         << arr[4][0] << endl;

    return 0;
}
