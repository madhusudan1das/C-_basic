#include <iostream>

using namespace std;

int main() {
    double original_amount, discount_rate;

    // Get user input
    cout << "Enter the original bill amount: and discount _ratde: ";
    cin >> original_amount>> discount_rate;

    // Calculate the discounted bill amount
    double discount_amount = original_amount * (1 - discount_rate / 100);

    // Display the result
    cout << "The discounted bill amount is: " << discount_amount << endl;

    return 0;
}
