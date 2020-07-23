#include <bits/stdc++.h>
using namespace std;

int steps[100001];
int n, k;

int findBrother() {
    if(n >= k)
        return n-k;
    steps[n] = 0;
    queue<int> q;
    q.push(n);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(int dir = -1; dir <= 1; ++dir){
            int next = now + dir;
            if(dir == 0)
                next = now * 2;
            if(next < 0 || next > 100000 || steps[next] != -1)
                continue;
            steps[next] = steps[now]+1;
            q.push(next);
        }
        if(steps[k] != -1)
            break;
    }
    return steps[k];
}

int main() {
    scanf("%d %d", &n, &k);
    fill(steps, steps+100001, -1);
    printf("%d", findBrother());
    return 0;
}
