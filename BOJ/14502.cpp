#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> blank;
int iDir[] = {0, 0, 1, -1};
int jDir[] = {1, -1, 0, 0};
int n, m;

bool isInLab(int i, int j){
    return 0 <= i && i < n && 0 <= j && j < m;
}

void spreadVirus(vector<vector<int>>& lab, queue<pair<int, int>>& q){
    while(!q.empty()){
        int i = q.front().first, j = q.front().second;
        q.pop();
        for(int dir = 0; dir < 4; ++dir){
            int ii = i + iDir[dir], jj = j + jDir[dir];
            if(isInLab(ii, jj) && lab[ii][jj] == 0){
                q.emplace(ii, jj);
                lab[ii][jj] = 2;
            }
        }
    }
}

int getSafeArea(vector<vector<int>> lab){
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            if(lab[i][j] == 2) {
                queue<pair<int, int>> q;
                q.emplace(i, j);
                spreadVirus(lab, q);
            }
    int safeArea = 0;
    for(auto& l : lab)
        for(auto& m : l)
            if(m == 0) ++safeArea;
    return safeArea;
}

int getMaxSafeArea(vector<vector<int>>& lab) {
    int answer = 0;
    vector<int> three(blank.size(), 0);
    int size = three.size();
    three[size-1] = three[size-2] = three[size-3] = 1;
    do{
        for(int i = 0; i < size; ++i)
            if(three[i] == 1)
                lab[blank[i].first][blank[i].second] = 1;
        answer = max(answer, getSafeArea(lab));
        for(int i = 0; i < size; ++i)
            if(three[i] == 1)
                lab[blank[i].first][blank[i].second] = 0;
    }while(next_permutation(begin(three), end(three)));

    return answer;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    vector<vector<int>> lab(n, vector<int>(m));
    for(int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> lab[i][j];
            if (lab[i][j] == 0)
                blank.emplace_back(i, j);
        }
    }
    cout << getMaxSafeArea(lab) << '\n';

    return 0;
}
