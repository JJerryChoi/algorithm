#include <iostream>
#include <list>
using namespace std;

int n;
class queue{
    size_t s;
    list<int> l;
public:
    queue(): s(0){}

    void push(int i){
        ++s;
        l.push_back(i);
    }
    void pop(){
        --s;
        l.pop_front();
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

queue q;

void excute(const string& command){
    if(command == "push"){
        int t;
        cin >> t;
        q.push(t);
    }
    else if(command == "pop"){
        if(q.empty()){
            cout << "-1\n";
            return;
        }
        cout << q.front() << '\n';
        q.pop();
    }
    else if(command == "size"){
        cout << q.size() << '\n';
    }
    else if(command == "empty"){
        if(q.empty())
            cout << "1\n";
        else
            cout << "0\n";
    }
    else if(command == "front"){
        if(q.empty()) {
            cout << "-1\n";
            return;
        }
        cout << q.front() << '\n';
    }
    else if(command == "back"){
        if(q.empty()){
            cout << "-1\n";
            return;
        }
        cout << q.back() << '\n';
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
