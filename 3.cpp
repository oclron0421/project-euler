#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool isPrime(long long x) {
    if (x < 2) {
        return false;
    }

    if (x == 2) {
        return true;
    }

    if (x % 2 == 0) {
        return false;
    }

    for (long long i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long num = 600851475143;
    long long largestFactor = 0;

    for (long long i = 2; i <= sqrt(num); i++) {
        if (num % i == 0 && isPrime(i)) {
            largestFactor = i;
        }
    }

    cout << largestFactor;
}
