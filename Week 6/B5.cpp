#include <iostream>
#include <math.h>

int isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << isPrime(n) << std::endl;
    return 0;
}