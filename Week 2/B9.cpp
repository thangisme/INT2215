#include <iostream>

int main(){
    unsigned long long int minCols, minRows;
    int n;
    std::cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i] >> b[i];
        if (i == 0) {
            minCols = a[i];
            minRows = b[i];
        }
        if (a[i] < minRows) minRows = a[i];
        if (b[i] < minCols) minCols = b[i];
    }
    std::cout << minCols * minRows << std::endl;
    return 0;
}