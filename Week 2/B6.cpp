#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1;  j <= n; j++){
            if ((j + i) % 10 == 0) {
                std::cout << 10 << " ";
                continue;
            }
            std::cout << (j + i) % 10<< " ";
        }
        std::cout << std::endl;
    }
    return 0;
}