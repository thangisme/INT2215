#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    int arr[x][y];

    int top = 0, bottom = x - 1, left = 0, right = y - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            arr[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            arr[i][right] = num++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                arr[bottom][i] = num++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                arr[i][left] = num++;
            }
            left++;
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}