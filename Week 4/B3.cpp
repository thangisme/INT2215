#include <iostream>
#include <string>

bool f(int num) {
    std::string numStr = std::to_string(num);
    int n = numStr.size();
    for (int i = 0; i < n / 2; i++) {
        if (numStr[i] != numStr[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, cnt = 0;
        std::cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (f(i)) cnt++;
        }
        std::cout << cnt << std::endl;
    }
    return 0;
}