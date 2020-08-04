#include <bits/stdc++.h>
using namespace std;

string excute(const string& command, deque<int>& deq){
    bool isReversed = false;
    for(const auto& c : command){
        if(c == 'R'){
            isReversed = !isReversed;
        }
        else if(c == 'D'){
            if(deq.empty())
                return "error";
            if(isReversed) {
                deq.pop_back();
            }
            else {
                deq.pop_front();
            }
        }
    }
    string result = "[";
    while(!deq.empty()){
        if(isReversed) {
            result += to_string(deq.back()) + ",";
            deq.pop_back();
        }
        else{
            result += to_string(deq.front()) + ",";
            deq.pop_front();
        }
        if(deq.empty())
            result.pop_back();
    }
    result += "]";
    return result;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    size_t T, size;
    cin >> T;
    string command, s;
    for(size_t tc = 0; tc < T; ++tc){
        cin >> command;
        cin >> size >> s;
        stringstream ss(s.substr(1, s.size() - 2));
        deque<int> deq;
        while(getline(ss, s, ','))
            deq.push_back(stoi(s));

        cout << excute(command, deq) << '\n';
    }
    return 0;
}
