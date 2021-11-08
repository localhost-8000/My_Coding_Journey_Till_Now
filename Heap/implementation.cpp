#include <iostream>
using namespace std;

class Heap
{
    int *arr;
    int size = 0;
    bool minHeap;

    //a is current element and b is the parent
    bool compare(int a, int b)
    {
        if (minHeap)
        {
            return a < b;
        }
        else
        {
            return a > b;
        }
    }
    void heapify(int idx)
    {
        //min_idx will point to the smallest of  the three
        int left = 2 * idx;
        int right = left + 1;

        int min_idx = idx;
        int last = size - 1;

        if (left <= last && compare(arr[left], arr[idx]))
        {
            min_idx = left;
        }
        if (right <= last && compare(arr[right], arr[min_idx]))
        {
            min_idx = right;
        }
        //It is also the base case
        if (min_idx != idx)
        {
            swap(&arr[idx], &arr[min_idx]);
            heapify(min_idx);
        }
    }

public:
    Heap(int default_size = 10, bool type = true)
    {
        arr = new int [default_size];
        //Block the 0th index
        arr[0] = -1;
        size = 1;
        minHeap = type;
    }

    void push(int d)
    {
        arr[size++] = d;
        int idx = size - 1;
        int parent = idx / 2;

        while (idx > 1 && compare(arr[idx], arr[parent]))
        {

            swap(&arr[idx], &arr[parent]);
            idx = parent;
            parent = parent / 2;
        }
    }

    int top()
    {
        return arr[1];
    }

    void pop()
    {
        int last_idx = size - 1;
        swap(&arr[1], &arr[last_idx]);
        size--;

        heapify(1);
    }

    bool empty()
    {
        return size == 1;
    }

    void swap(int *a, int *b) {
        int c = *a;
        *a = *b;
        *b = c;
    }
    void print() {
        for(int i=0; i<size; ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{

    Heap h(4, false);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        h.push(no);
    }

    while (!h.empty())
    {
        cout << h.top() << " ";
        h.pop();
    }

    return 0;
}