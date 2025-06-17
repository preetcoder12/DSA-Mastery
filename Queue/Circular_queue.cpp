    #include <bits/stdc++.h>
    using namespace std;
    class CircularQueue
    {
    public:
        int *arr;
        int front;
        int rear;
        int size;

        CircularQueue(int n)
        {
            size = n;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        bool enqueue(int value)
        {
            if ((front == 0 && rear == size - 1) || (rear + 1) % size == front)
            {
                return false;
            }
            else if (front == -1)
            {
                front = rear = 0;
            }
            else
            {
                rear = (rear + 1) % size;
            }
            arr[rear] = value;
            return true;
        }

        int dequeue()
        {
            if (front == -1)
            {
                return -1;
            }
            int ans = arr[front];
            arr[front] = -1;

            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
            return ans;
        }
    };