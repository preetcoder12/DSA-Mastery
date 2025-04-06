#include <bits/stdc++.h> 
class Deque
{
public:

    int *arr;
    int size;
    int front;
    int rear;

    Deque(int n)
    {
        size = n;
        arr  = new int[size];
        front =  -1;
        rear =  -1;
    }

    bool pushFront(int x)
    {
        if((rear+1)%size == front ){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else{
            front = (front-1+size)%size;
        }
        arr[front] = x;
        return true;

    }

    bool pushRear(int x)
    {
        if( (rear+1)%size == front ){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else{
            rear = (rear+1)%size;
        }
        arr[rear] = x;
        return true;
    }

    int popFront()
    {
        if(front == -1){
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else{
            front =( front+1)%size;
        }
        return ans;
    }

    int popRear()
    {
        if(rear == -1){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear){
            front = rear = -1;
        }
        else{
            rear =( rear-1+size)%size;
        }
        return ans; 
    }

    int getFront()
    {
       return (isEmpty())?-1:arr[front];
    }

    int getRear()
    {
       return (isEmpty())?-1:arr[rear];       
    }

    bool isEmpty()
    {
        return front == -1;
    }    

    bool isFull()
    {
        return (rear + 1) % size == front;
    }
};