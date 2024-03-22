#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int* arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[i + 1];
        for (int j = 0; j < i + 1; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}