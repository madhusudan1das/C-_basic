#include <iostream>
#include <climits>  // Include this header for INT_MAX
using namespace std;

int main() {
    char a = 128;
    cout << (int)a << endl;

    char b = 127;
    b++;
    cout << (int)b << endl;

    // Correcting the value to be within the char range
    char c = -128;
    c--; // This will decrement the value to demonstrate overflow
    cout << (int)c << endl;

    char d = -128;
    d--;
    cout << (int)d << endl;

    int e = INT_MAX;
    e++;
    cout << (int)e << endl;

    return 0;
}
