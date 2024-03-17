#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            arr[i][j] = 0;
    }

    int i = 0, j = n / 2, cnt = 2;
    arr[i][j] = 1;

    while (cnt <= n * n)
    {
        int tempj = (j + 1) % n;
        int tempi = ((i - 1) + n) % n;
        if (!arr[tempi][tempj])
        {
            i = tempi; j = tempj;
            arr[i][j] = cnt;
        }
        else
        {
            i = (++i) % n;
            arr[i][j] = cnt;
        }

        cnt++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}