#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter two numbers: ";
    cin >> m >> n;

    // Validate input
    if (m <= 0 || n <= 0) {
        cout << "Please enter positive integers." << endl;
        return 1;
    }

    // Implementing Euclidean algorithm
    while (m != n) {
        if (m > n) {
            m -= n;
        } else {
            n -= m;
        }
    }

    // Both m and n are the same here and are the GCD
    cout << "GCD is: " << m << endl;

    return 0;
}
