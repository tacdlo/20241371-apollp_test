// main.cpp
#include <iostream>
#include <vector>
#include "solution.h"

using namespace std;

int main() {
    // 设置locale以支持中文输出
    setlocale(LC_ALL, "");

    int m, n;
    cout << "请输入棋盘的行数和列数：";
    cin >> m >> n;

    vector<vector<char>> board(m, vector<char>(n));
    cout << "请输入棋盘的每一行，'X' 和 'O' 分隔开：" << endl;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
        }
    }

    Solution solution;
    solution.solve(board);

    // 输出结果
    cout << "结果：" << endl;
    for (const auto& row : board) {
        for (char c : row) {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}