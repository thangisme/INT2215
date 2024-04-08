#include <iostream>
#include <string>

void pad_left(char a[], int n, int k) {
    if (k <= n) return ;
    for (int i = k - 1; i > n; i--) {
        a[i] = a[i - k + n];
    }
    for (int i = 0; i < k - n; i++) {
        a[i] = ' ';
    }
}

int main() {
    char c[5] = {'a', 'b'};
    pad_left(c, 2, 5);
    std::cout << c << std::endl;
    return 0;
}