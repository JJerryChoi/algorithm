#include <bits/stdc++.h>
using namespace std;

int n;
int A[1001];
int lis[1001]; // lis = longest incresing subsequence;
int lds[1001]; // lds = longest decresing subsequence;

int findLongestBitonicSquence(){
    int ans = 1;
    for(int i = 0; i < n; ++i){
        lis[i] = 1;
        lds[n-i-1] = 1;
        for(int j = 0; j < i; ++j) {
            if (A[i] > A[j])
                lis[i] = max(lis[i], lis[j] + 1);
            if (A[n-i-1] > A[n-j-1])
                lds[n-i-1] = max(lds[n-i-1], lds[n-j-1] + 1);
        }
    }
    for(int i = 0; i < n; ++i)
        ans = max(ans, lds[i] + lis[i]-1);

    return ans;
}

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", A+i);
    printf("%d", findLongestBitonicSquence());
    return 0;
}
