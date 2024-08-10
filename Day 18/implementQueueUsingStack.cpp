#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    MyQueue() {
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int val=peek();
        output.pop();
        return val;
    }
    int peek() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    bool empty() {
        return input.empty() && output.empty();
    }
};
int main(){
}