#include <fstream>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <vector>

int main() {
    std::string filename = "input.txt";
    std::vector<int> nums;
    std::ifstream infile(filename);
    std::vector<int>::iterator firstItr;
    std::vector<int>::iterator secondItr;
    long long product = 1;

    if (!infile.is_open()) {
        std::cerr << "Error: could not open the file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(infile, line)) {
        for (char c : line) {
            if (std::isdigit(c)) {
                int digit = c - '0';
                nums.push_back(digit);
                // std::cout << digit;
            }
        }
    }

    firstItr = nums.begin();
    secondItr = nums.begin() + 13;

    while (secondItr != nums.end()) {
        std::vector<int>::iterator tempItr;
        long long tempProduct = 1;
        int count = 0;
        for (tempItr = firstItr; tempItr != secondItr + 1; tempItr++) {
            if (*tempItr == 0) {
                break;
            }
            tempProduct *= *tempItr;
            count++;
        }
        if (tempProduct > product && count == 13) {
            product = tempProduct;
        }
        firstItr++;
        secondItr++;
    }

    std::cout << product << std::endl;
    return 0;
}