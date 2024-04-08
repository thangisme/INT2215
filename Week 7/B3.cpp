#include <iostream>

void pad_right(char a[], int n, int k) {
    if (n >= k) return;
    for (int i = n; i < k - 1; i++) a[i] = ' ';
}

int main() {
    char c[5] = {'a', 'b'};
    pad_right(c, 2, 5);
    std::cout << c << std::endl;
    return 0;
}