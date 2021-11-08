#include<iostream>
using namespace std;

void linear_search(int arr[], int n, int key)
{
    int flag = 1;
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] == key)
        {
            cout<<"Element "<<key<<" is found at the index "<<i;
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        cout<<"Element "<<key<<" is not found...";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array:- ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:\n";
    for(int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"\nEnter the element to be search:- ";
    cin>>key;
    linear_search(arr, n, key);
    return 0;
}
