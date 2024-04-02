#include <iostream>

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

bool isCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "UCLN: " << gcd(a, b) << std::endl;
    std::cout << "Nguyen to cung nhau :" << (isCoprime(a, b) ? "Co" : "Khong") << std::endl;
    return 0;
}