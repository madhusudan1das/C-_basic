#include <iostream>
using namespace std;

int main() {
    int option;
    int a = 10, b = 5, c;

    while (true) {
        cout << "menu\n";
        cout << "1. Add  2. Sub  3. Mul  4. Div\n";
        cout << "Enter your option: ";
        cin >> option;

        if (option >= 1 && option <= 4) {
            break; // Exit loop if a valid option is chosen
        } else {
            cout << "Invalid option, choose another \n"; // Emoji added here
        }
    }

    switch(option) {
        case 1:
            c = a + b;
            cout << c << endl;
            break;
        case 2:
            c = a - b;
            cout << c << endl;
            break;
        case 3:
            c = a * b;
            cout << c << endl;
            break;
        case 4:
            c = a / b;
            cout << c << endl;
            break;
    }

    return 0;
}
