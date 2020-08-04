#include <bits/stdc++.h>
using namespace std;

int rotatingQueue(deque<int> deq, int m){
    int rotateTimes = 0;
    int target;
    for(int i = 0; i < m; ++i){
        cin >> target;
        deque<int> popFront = deq;
        deque<int> popBack = deq;
        int times = 0;
        while(target != popFront.front() && target != popBack.front()){
            popFront.push_back(popFront.front());
            popFront.pop_front();

            popBack.push_front(popBack.back());
            popBack.pop_back();
            ++times;
        }
        if(popFront.front() == target)
            deq = popFront;
        else
            deq = popBack;

        deq.pop_front();
        rotateTimes += times;
    }
    return rotateTimes;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    deque<int> deq;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        deq.push_back(i);
    cout << rotatingQueue(deq, m);
    return 0;
}
