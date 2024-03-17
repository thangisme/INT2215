#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    std::cout << "Yes" << std::endl;
    return 0;
}