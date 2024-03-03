#include <iostream>

int main(){
    int n, temp = -1;
    do {
        std::cin >> n;
        if (n == temp) continue;
        std::cout << n << " ";
        temp = n;
    } while (n >= 0);
    return 0;
}