#include <bits/stdc++.h>
using namespace std;

int p, q;

int findGcd(int a, int b){
    if(b == 0)
        return a;
    return findGcd(b, a%b);
}

int main() {
    scanf("%d %d", &p, &q);
    int gcd = findGcd(p, q);
    printf("%d\n%d", gcd, p * q / gcd);
    return 0;
}
