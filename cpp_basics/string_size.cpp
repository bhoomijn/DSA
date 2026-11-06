

// strings
// string length and character modification

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "Hello World";

    // find length of string
    int len = s.size();

    // modify second last character
    s[len - 2] = 'd';

    cout << len;

    return 0;
}

