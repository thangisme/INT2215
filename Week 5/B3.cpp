#include <iostream>

int main() {
    int cnt[10];
    for (int i = 0; i < 10; i++) cnt[i] = 0;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        cnt[temp]++;
    }
    for (int i = 0; i < 10; i++) {
        std::cout << i << " : " << cnt[i] << std::endl;
    }
    return 0;
}