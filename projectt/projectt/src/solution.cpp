// solution.cpp
#include "solution.h"

void Solution::solve(std::vector<std::vector<char>>& board) {
    int m = board.size(), n = board[0].size();
    std::vector<std::vector<int>> conn;

    auto dfs = [&](auto&& dfs, int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] == 'X')
            return;
        conn.push_back({i, j});
        board[i][j] = 'X';
        dfs(dfs, i, j - 1);
        dfs(dfs, i, j + 1);
        dfs(dfs, i - 1, j);
        dfs(dfs, i + 1, j);
    };

    for (int j = 0; j < n; ++j) {
        dfs(dfs, 0, j);
        dfs(dfs, m - 1, j);
    }

    for (int i = 0; i < m; ++i) {
        dfs(dfs, i, 0);
        dfs(dfs, i, n - 1);
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'O')
                board[i][j] = 'X';
        }
    }

    for (auto vec : conn) {
        board[vec[0]][vec[1]] = 'O';
    }
}