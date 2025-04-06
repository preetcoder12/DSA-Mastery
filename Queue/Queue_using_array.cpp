#include <bits/stdc++.h> 
using namespace std;
class Queue {
public:

    int*arr;
    int size;
    int front_1;
    int rear;

    Queue() {
        size = 100001;
        arr = new int[size];
        front_1=0;
        rear=0;
    }

    bool isEmpty() {
        return (front_1 == rear)?true:false;
    }

    void enqueue(int data) {
        if(rear != size){
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(!isEmpty()){
            int element = arr[front_1];
            arr[front_1] = -1;
            front_1++;
            if(front_1 == rear){
                front_1 = 0;
                rear = 0;
            }
            return element;
        }
        return -1;
        
    }

    int front() {
        return (!isEmpty())?arr[front_1]:-1;
    }
};