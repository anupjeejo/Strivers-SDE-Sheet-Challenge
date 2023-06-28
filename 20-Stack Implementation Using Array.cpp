#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
    private:
    int topElement=-1
    int size = -1;
    vector<int> arr;

    public:
    Stack(int capacity) {
        arr.resize(capacity);
        size = capacity;
    }

    void push(int num) {
        if(topElement == size)
        {
            return;
        }
        arr[++topElement] = num;
    }

    int pop() {
        if(topElement == -1)
            return -1;
        
        return arr[topElement--];
    }
    
    int top() {
        if(topElement == -1)
            return -1;
        return arr[topElement];
    }
    
    int isEmpty() {
        return topElement == -1 ? 1 : 0;
    }
    
    int isFull() {
        return topElement == size ? 1 : 0;
    }
    
};