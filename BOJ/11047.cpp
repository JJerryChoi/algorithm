#include <bits/stdc++.h>
using namespace std;

int N, K;
int coin[11];
int n;

void greedy(){
    int sum = 0;
    for(int i = N-1; sum != K; --i){
        while(sum + coin[i] <= K) {
            sum += coin[i];
            ++n;
        }
    }
}

int main() {
    scanf("%d %d", &N, &K);
    for(int i = 0; i < N; ++i)
        scanf("%d", coin+i);
    greedy();
    printf("%d", n);
    return 0;
}
