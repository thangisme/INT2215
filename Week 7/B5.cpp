#include <iostream>

bool is_palindrome(char a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) return false;
    }
    return true;
}

int main() {
    char a[] = {'a', 'b', 'b', 'a'};
    std::cout << is_palindrome(a, 4) << std::endl;
    return 0;
}