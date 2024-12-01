#include <iostream>
using namespace std;
int main() {
    double num1, num2, sum;

    // Prompt the user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum of the two numbers
    sum = num1 / num2;
    // Display the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." <<std::endl ;

    return 0;
}
