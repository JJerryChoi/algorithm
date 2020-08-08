#include <bits/stdc++.h>
using namespace std;

void printStars(int n){
    for(int i = 0; i < n; ++i)
        cout << '*';
}
void printBlanks(int n){
    for(int i = 0; i < n; ++i)
        cout << ' ';
}

void printStars8(int n){
    int i = 0;
    while(++i <= n){
        printStars(i);
        printBlanks(2*(n-i));
        printStars(i);
        cout << '\n';
    }
    --i;
    while(--i > 0){
        printStars(i);
        printBlanks(2*(n-i));
        printStars(i);
        cout << '\n';
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n;
    printStars8(n);
    return 0;
}
