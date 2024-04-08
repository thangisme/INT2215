#include <iostream>

void reverse(char a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        std::swap(a[i], a[n - i - 1]);
    }
}

int main() {
    char arr[] = {'a', 'b', 'c'};
    reverse(arr, 3);
    std::cout << arr << std::endl;
    return 0;
}