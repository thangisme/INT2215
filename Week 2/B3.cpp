#include <iostream>
#include <string>

int main(){
    int n = 5;
    for (int i = 0; i < n; i++) {
        std::cout << std::string(n - i - 1, ' ') << std::string(i * 2 + 1, '*') << std::endl;
    }
    return 0;
}