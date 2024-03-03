#include <iostream>
#include <string>

int main(){
    int n = 5;
    for (int i = n - 1; i >= 0; i--) {
        std::cout << std::string(n - i - 1, ' ') << std::string(i * 2 + 1, '*') << std::endl;
    }
    return 0;
}