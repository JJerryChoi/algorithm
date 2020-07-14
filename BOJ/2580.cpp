#include <bits/stdc++.h>
using namespace std;

array<array<int, 9>, 9> board;
vector<pair<int, int>> q;

void print() {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

bool isPromising(int n, int m) {
    for (int i = 0; i < 9; ++i) {
        if (board[q[n].first][i] == m)
            return false;
        if (board[i][q[n].second] == m)
            return false;
    }
    pair<int, int> smallSquare = make_pair(q[n].first / 3, q[n].second / 3);
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            if (board[smallSquare.first * 3 + i][smallSquare.second * 3 + j] == m)
                return false;
        }
    return true;
}

void sudoku(int n) {
    if (n == q.size()) {
        print();
        exit(0);
    }

    for (int i = 1; i <= 9; ++i) {
        if (isPromising(n, i)) {
            board[q[n].first][q[n].second] = i;
            sudoku(n + 1);
            board[q[n].first][q[n].second] = 0;
        }
    }
}

int main() {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 0)
                q.emplace_back(i, j);
        }
    }

    sudoku(0);
    return 0;
}
