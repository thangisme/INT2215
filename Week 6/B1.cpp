#include <iostream>
#include <cstdlib>

struct mine
{
    int cnt;
    bool show;
};

mine **genMatrix(int m, int n, int k);
void initMatrix(mine **matrix, int m, int n);
void printMatrix(mine **matrix, int m, int n);
bool checkMine(mine **matrix, int x, int y);
void setMineCount(mine** matrix, int m, int n, int x, int y);
void revealMatrix(mine**matrix,int m, int n, int x, int y);

int main()
{
    int m, n, k;
    std::cin >> m >> n >> k;
    mine **matrix = genMatrix(m, n, k);
    bool dead = false;
    int cnt = m * n - k;
    while (!dead && cnt) {
        printMatrix(matrix, m, n);
        int x, y;
        std::cin >> x >> y;
        if (checkMine(matrix, --x, --y)) {
            dead = true;
            std::cout << "You're dead" << std::endl;
        } else {
            cnt--;
            revealMatrix(matrix, m, n, x, y);
        }
    }
    std::cout << "You win" << std::endl;
    return 0;
}

mine **genMatrix(int m, int n, int k)
{
    mine **matrix = new mine *[m];
    for (int i = 0; i < n; i++)
        matrix[i] = new mine[n];
    initMatrix(matrix, m, n);
    for (int i = 0; i < k; i++)
    {
        srand((unsigned)time(NULL) + i);
        int rCol = rand() % n;
        int rRow = rand() % m;
        matrix[rRow][rCol].cnt = 8;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            setMineCount(matrix, m, n, i , j);
        }
    }
    return matrix;
}

void initMatrix(mine **matrix, int m, int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            matrix[i][j].cnt = 0;
            matrix[i][j].show = false;
        }
    }
}

bool checkMine(mine **matrix, int x, int y)
{
    return matrix[x][y].cnt >= 8;
}

void printMatrix(mine **matrix, int m, int n)
{
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (matrix[i][j].show)
            {
                if (matrix[i][j].cnt < 8)
                {
                    std::cout << matrix[i][j].cnt << " ";
                }
                else
                {
                    std::cout << '*' << " ";
                }
            }
            else
            {
                std::cout << "@ ";
            }
        }
        std::cout << std::endl;
    }
}

void setMineCount(mine** matrix, int m, int n, int x, int y) {
    int count = 0;
    
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; ++i) {
        int newRow = x + dx[i];
        int newCol = y + dy[i];
        
        if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n) {
            if (matrix[newRow][newCol].cnt == 8) {
                matrix[x][y].cnt++;
            }
        }
    }
}

void revealMatrix(mine** matrix,int m, int n, int x, int y) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; ++i) {
        int newRow = x + dx[i];
        int newCol = y + dy[i];
        
        if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n) {
            matrix[x][y].show = true;
        }
    }
}