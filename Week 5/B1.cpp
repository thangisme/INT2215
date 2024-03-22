#include <iostream>

int main() {
    int n, sum = 0;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    int u = sum / n;
    int o = 0;
    for (int i = 0; i < n; i++) {
        o += (arr[i] - u) * (arr[i] - u);
    }
    o /= n;
    std::cout << u << " " << o << std::endl;
    return 0;
}