#include <iostream>
#include <string>

int main() {
    // Declare a string variable to store the user's name
    std::string name;

    // Prompt the user to enter their name
    std::cout << "Please enter your name: ";

    // Read the user's input and store it in the 'name' variable
    std::getline(std::cin, name);

    // Greet the user
    std::cout << "Hello, " << name << "! Welcome to the world of C++ programming!" << std::endl;

    return 0;
}