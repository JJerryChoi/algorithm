#include <iostream>
#include <list>
using namespace std;

int n;
class Deque{
    size_t s;
    list<int> l;
public:
    Deque(): s(0){}

    void push_front(int i){
        ++s;
        l.push_front(i);
    }
    void push_back(int i){
        ++s;
        l.push_back(i);
    }
    void pop_front(){
        --s;
        l.pop_front();
    }
    void pop_back(){
        --s;
        l.pop_back();
    }
    size_t size(){
        return s;
    }
    bool empty(){
        return s == 0;
    }
    int front(){
        return l.front();
    }
    int back(){
        return l.back();
    }
};

Deque deque;

void excute(const string& command){
    if(command == "push_front"){
        int t;
        cin >> t;
        deque.push_front(t);
    }
    else if(command == "push_back"){
        int t;
        cin >> t;
        deque.push_back(t);
    }
    else if(command == "pop_front"){
        if(deque.empty()){
            cout << "-1\n";
            return;
        }
        cout << deque.front() << '\n';
        deque.pop_front();
    }
    else if(command == "pop_back"){
        if(deque.empty()){
            cout << "-1\n";
            return;
        }
        cout << deque.back() << '\n';
        deque.pop_back();
    }
    else if(command == "size"){
        cout << deque.size() << '\n';
    }
    else if(command == "empty"){
        if(deque.empty())
            cout << "1\n";
        else
            cout << "0\n";
    }
    else if(command == "front"){
        if(deque.empty()) {
            cout << "-1\n";
            return;
        }
        cout << deque.front() << '\n';
    }
    else if(command == "back"){
        if(deque.empty()){
            cout << "-1\n";
            return;
        }
        cout << deque.back() << '\n';
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    string command;
    for(int i = 0; i < n; ++i) {
        cin >> command;
        excute(command);
    }
    return 0;
}
