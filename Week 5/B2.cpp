#include <iostream>

int main() {
    int n, minNum, maxNum, evenSum = 0, oddCounter = 0;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        if (i == 0) {
            minNum = arr[i];
            maxNum = arr[i];
        } 
        minNum = minNum < arr[i] ? minNum : arr[i];
        maxNum = maxNum > arr[i] ? maxNum : arr[i];
        evenSum += (arr[i] % 2 == 0) ? arr[i] : 0;
        oddCounter += arr[i] % 2 ? 1 : 0;
    }
    std::cout << minNum << " " << maxNum << " " << evenSum << " " << oddCounter << std::endl;
    return 0;
}