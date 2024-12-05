#include<bits/stdc++.h>

std::string binaryToText(const std::string &binary) {
    std::string text = "";
    for (size_t i = 0; i < binary.size(); i += 8) {
        std::string byte = binary.substr(i, 8);
        char letter = static_cast<char>(std::bitset<8>(byte).to_ulong());
        text += letter;
    }
    return text;
}

int main() {
    std::string binary = "01001001 00100000 01101100 01101111 01110110 01100101 00100000 01111001 01101111 01110101";
    std::string cleanedBinary = "";
    for (char c : binary) {
        if (c != ' ') {
            cleanedBinary += c;
        }
    }
    std::string text = binaryToText(cleanedBinary);
    std::cout << text << std::endl;
    return 0;
}
                      