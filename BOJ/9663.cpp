#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> board;

bool isPromising(int n) {
    for(int i = 0; i < n; ++i){
        if(board[i] == board[n])
            return false;
        if(abs(board[i] - board[n]) == (n - i))
            return false;
    }
    return true;
}

int nQueen(int k){
    static int answer = 0;
    if(k == n) {
        ++answer;
        return 0;
    }

    for(int i = 0; i < n; ++i){
        board[k] = i;
        if(isPromising(k))
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
