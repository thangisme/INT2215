#include <iostream>

int main() {
    int n, temp;
    std::cin >> n;
    int arr[n], counter[n];
    for (int i = 0; i < n; i++) counter[i] = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        counter[temp]++;
        if (counter[temp] > 1) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}