#include <iostream>
using namespace std;

// Recursive Fibonacci function
long long fib(long long n) {
    if (n <= 1) {
        return n;
    } else {
        long long sum = fib(n - 1) + fib(n - 2);
        return sum;
    }
}

int main() {
    int i = 0;
    long long sum = 0;  
    bool flag = true; 
    while(flag){
        if(fib(i)<4000000 && ((fib(i))%2==0)){
            sum+=fib(i);
        }else if(fib(i)>4000000){
            flag = false;
        }
        i++;
    }
    cout<<sum<<" "<<i; 
    return 0;
}