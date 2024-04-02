#include <iostream>
#include <string>

void printLine(int m, int n) {
    std::cout << std::string(m, ' ') << std::string(n * 2 + 1, '*') << std::string(m, ' ') << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        printLine(n - i, i);
    }
    return 0;
}