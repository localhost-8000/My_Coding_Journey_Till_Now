#include<iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T *arr;
    int size = 0;
public:
    Stack(int size) {
        arr = new T [size];
    }
    void push(int data) {
        arr[size++] = data;
    }
    void pop() {
        if(!empty()) {
            size--;
        }
    }
    bool empty() {
        return size == 0;
    }
    T top() {
        return arr[size - 1];
    }
    ~Stack() {
        delete arr;
    }
};

int main() {
    Stack<char> st(5);
    for (int i = 0; i < 5; i++)
    {
        st.push('a' + i);
    }

    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }
    
}