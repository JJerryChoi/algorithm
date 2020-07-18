#include <bits/stdc++.h>
using namespace std;

queue<int> numbers;
vector<int> op;
int maximum = -1012345678;
int minimum = 1012345678;
int n;

int calculate(int a, int op, int b){
    switch(op){
        case 0:
            return a+b;
        case 1:
            return a-b;
        case 2:
            return a*b;
        case 3:
            return a/b;
        default:
            return 0;
    }
}

void calculate() {
    do{
        queue<int> s = numbers;
        int result = s.front();
        s.pop();
        for(int i = 0; i < op.size(); ++i){
            result = calculate(result, op[i], s.front());
            s.pop();
        }
        maximum = max(result, maximum);
        minimum = min(result, minimum);
    }while(next_permutation(op.begin(), op.end()));
}

int main() {
    cin >> n;
    int number;
    for(int i = 0; i < n; ++i){
        cin >> number;
        numbers.push(number);
    }
    for(int i = 0; i < 4; ++i){
        cin >> number;
        for(int j = 0; j < number; ++j)
            op.push_back(i);
    }
    calculate();
    cout << maximum << endl << minimum;
    return 0;
}
