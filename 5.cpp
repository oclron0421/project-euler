#include <iostream>
using namespace std;

int divArr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

bool isEvenlyDivisible(int x) {
    for (int i = 0; i < 10; i++) {
        if (x % divArr[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i = 10;
    while (!isEvenlyDivisible(i)) {
        i++;
    }

    cout << i;
    return 0;
}