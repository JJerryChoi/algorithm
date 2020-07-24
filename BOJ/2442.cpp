#include <bits/stdc++.h>
using namespace std;

int n;

void printStars5(){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n-i-1; ++j)
            printf(" ");
        for(int j = 0; j < (i*2)+1; ++j)
            printf("*");
        printf("\n");
    }
}

int main() {
    scanf("%d", &n);
    printStars5();
    return 0;
}
