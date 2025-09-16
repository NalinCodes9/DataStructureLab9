#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        int sz = q.size();
        for (int i = 0; i < sz - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    void pop() {
        if (!q.empty()) q.pop();
    }
    int top() {
        if (!q.empty()) return q.front();
        return -1;
    }
    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl; 
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
}
