#include<iostream>
using namespace std;

template <typename T>
class Queue {
private:
    T *arr;
    int size;
    int front = -1;
    int rear = -1;

public:
    Queue(int size) {
        size = size;
        arr = new T [size];
    }
    void push(int data) {
        if((front == 0 && rear == size - 1) || (front == rear + 1)) {
            cout << "Queue overflow \n";
            return;
        }
        if(front == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear == size - 1) ? 0 : rear + 1;
        }
        arr[rear] = data;
    }
    void pop() {
        if(front == -1) {
            cout<<"Queue underflow \n";
            return;
        }
        if(front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front == size - 1) ? 0 : front + 1;
        }
    }
    T top() {
        return arr[front];
    }
    bool empty() {
        if(front == -1 && rear == -1) {
            return true;
        }
        return false;
    }
};



int main() {
    Queue<char> q(5);
    for(int i=1; i<=5; ++i) {
        q.push('a' + i);
    }
    while(!q.empty()) {
        cout<<q.top()<<endl;
        q.pop();
    }

    return 0;
}