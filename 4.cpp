#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    string xStr = to_string(x);
    return xStr == string(xStr.rbegin(), xStr.rend());
}

int main() {
    int num1;
    int num2;
    int largestPalindrome = 0;
    for (num1 = 999; num1 > 0; num1--) {
        for (num2 = 999; num2 > 0; num2--) {
            if (isPalindrome(num1 * num2) && num1 * num2 > largestPalindrome)

                largestPalindrome = num1 * num2;
        }
    }
    cout << largestPalindrome;
    return 0;
}