#include<bits/stdc++.h>
using namespace std;
int main() {
    int i, n, sum = 0;
    cout << "Enter n number: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            // Print the factor
            sum += i;           // Add the factor to sum
        }
    }
    cout << "Sum of factors is: " << sum << endl;
    return 0;
}
