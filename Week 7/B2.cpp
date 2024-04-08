#include <iostream>

void delete_char(char arr[], int n, char c) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == c) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[n - 1] = ' ';
        }
    }
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'c'};
    delete_char(arr, 5, 'c');
    std::cout << arr << std::endl;
    return 0;
}