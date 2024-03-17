#include <iostream>
#include <vector>
using namespace std;
int countAdjacentMines(vector<vector<int>>& board, int row, int col, int numRows, int numCols) {
    int count = 0;
    
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; ++i) {
        int newRow = row + dx[i];
        int newCol = col + dy[i];
        
        if (newRow >= 0 && newRow < numRows && newCol >= 0 && newCol < numCols) {
            if (board[newRow][newCol] == -1) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int> (n));
    for (int i  = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char ch;
            cin >> ch;
            if (ch == '*') {
                arr[i][j] = -1;
            } else if (ch == '.') {
                arr[i][j] = 0;
            }
        }
    }
    
    for (int i  = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == -1) {
                cout << "* ";
            } else {
                int cnt = countAdjacentMines(arr, i, j, m, n);
                cout << cnt << " ";
            }
        }
        cout << endl;
    }
    return 0;
}