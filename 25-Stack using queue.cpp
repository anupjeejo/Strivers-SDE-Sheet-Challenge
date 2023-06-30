#include <bits/stdc++.h> 
class Stack {
    private:
    queue<int> q;

    public:
    Stack() {}

    int getSize() {
        return q.size();
    }

    bool isEmpty() {
        return q.empty();
    }

    void push(int element) {
        q.push(element);

        for(int i=0; i<q.size()-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if(q.size()==0)
            return -1;
        int temp = q.front();
        q.pop();
        return temp;
    }

    int top() {
        if(q.size()==0)
            return -1;
        int temp = q.front();
        return temp;
    }
};