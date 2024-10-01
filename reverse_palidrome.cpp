#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0, original, r;
    cout << "Enter a positive number: ";
    cin >> n;
    original = n;

    while (n > 0) {
        r = n % 10;
        reversed = reversed * 10 + r;
        n = n / 10;
        cout<<r;
    }
    cout<<endl;

    if (reversed == original) {
        cout << "pali" << endl;
    } else {
        cout << "not" << endl;
    }

    return 0;
}