#include <iostream>
using namespace std;

bool isPrime(long long x) {
    if (x <= 1)
        return false;
    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return false;

    return true;
}
int main() {
    long long primeNo;
    int i = 0;
    long long x = 2;
    while (i < 10001) {
        if (isPrime(x)) {
            i++;
        }
        x++;
    }
    cout << x - 1;
}