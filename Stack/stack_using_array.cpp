#include<bits/stdc++.h>
using namespace std;

class Stack {
    vector<int>stack;
    int capacity;
public:
    
    Stack(int capacity) {
        this->capacity = capacity;
    }

    void push(int num) {
        if(stack.size() < capacity){
            stack.push_back(num);
        }
    }

    int pop() {
        if(!stack.empty()){
            int topelement = stack.back();
            stack.pop_back();
            return topelement;
        }
        else{
            return -1;
        }
    }
    
    int top() {
        if(!stack.empty()){
            return  stack.back();
        }
        else{
            return -1;
        }
    }
    
    int isEmpty() {
       return (stack.empty())? 1: 0;
    }
    
    int isFull() {
       return (stack.size()==capacity)? 1: 0;
    }
    
};
