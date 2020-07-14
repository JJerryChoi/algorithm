#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> board;

bool isPromising(vector<int> &q, int n) {
    for(int i = 0; i < n; ++i){
        if(q[i] == q[n])
            return false;
        if(abs(q[i]-q[n]) == (n-i))
            return false;
    }
    return true;
}

int nQueen(int k){
    static int answer = 0;
    int m = board.size();
    if(k == m) {
        ++answer;
        return 0;
    }

    for(int i = 0; i < m; ++i){
        board[k] = i;
        if(isPromising(board, k))
            nQueen(k + 1);
    }
    return answer;
}


int main() {
    cin >> n;
    board = vector<int>(n);
    cout << nQueen(0);
    return 0;
}
