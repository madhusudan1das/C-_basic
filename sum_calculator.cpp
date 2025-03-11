#include <iostream>
#include <fstream>
#include <vector>

int main() {
    // File names
    std::string inputFileName = "input.txt";  
    std::string outputFileName = "output.txt";

    // Open the input file
    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file " << inputFileName << std::endl;
        return 1;
    }

    // Read integers from the input file
    std::vector<int> numbers;
    int number;
    while (inputFile >> number) {
        numbers.push_back(number);
    }
    inputFile.close();

    // Calculate the sum of the numbers
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }

    // Open the output file
    std::ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open output file " << outputFileName << std::endl;
        return 1;
    }

    // Write the sum to the output file
    outputFile << "The sum of the numbers is: " << sum << std::endl;
    outputFile.close();

    // Print the result to the terminal as well
    std::cout << "The sum of the numbers is: " << sum << std::endl;
    std::cout << "Sum calculated and written to " << outputFileName << std::endl;  // ✅ Fixed this line

    return 0;
}
