#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> board;
int H, W;
int iDir[] = {1, 1, 1, 0, 0, 1, 1, 1};
int jDir[] = {0, -1, 0, 1, 1, 0, 1, 1};

bool isInside(int i, int j){
    return 0 <= i && i < H && 0 <= j && j < W && board[i][j] == '.';
}
int countCombination(int n){
    if(n == 0) return 1;

    int count = 0;
    int i = -1, j = -1;
    for(int p = 0; p < board.size(); ++p){
        for(int q = 0; q < board[p].size(); ++q){
            if(board[p][q] == '.') {
                i = p, j = q;
                break;
            }
        }
        if(j != -1) break;
    }

    for(int dir = 0; dir < 4; ++dir){
        if(isInside(i+iDir[dir], j+jDir[dir]) && isInside(i+iDir[dir+4], j+jDir[dir+4])){
            board[i][j] = '#', board[i+iDir[dir]][j+jDir[dir]] = '#', board[i+iDir[dir+4]][j+jDir[dir+4]] = '#';
            count += countCombination(n-1);
            board[i][j] = '.', board[i+iDir[dir]][j+jDir[dir]] = '.', board[i+iDir[dir+4]][j+jDir[dir+4]] = '.';
        }
    }
    return count;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    size_t C;
    cin >> C;
    for (size_t tc = 0; tc < C; ++tc) {
        cin >> H >> W;
        board.resize(H);
        for(auto& b : board)
            b.resize(W);
        int nWhite = 0;
        for (auto &b : board) {
            for (auto &c : b) {
                cin >> c;
                if (c == '.')
                    ++nWhite;
            }
        }

        if (nWhite % 3 != 0) {
            cout << "0\n";
            continue;
        }
        cout << countCombination(nWhite/3) << '\n';
    }
    return 0;
}
