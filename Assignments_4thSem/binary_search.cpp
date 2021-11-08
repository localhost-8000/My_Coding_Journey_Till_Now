#include<iostream>
using namespace std;

void binary_search(int arr[], int n, int key)
{
    int flag = 1;
    int low = 0;
    int high = n-1;
    int mid;
    while(low <= high)
    {
        mid = low + (high-low)/2;
        if(arr[mid] == key)
        {
            cout<<"Element "<<key<<" is found at the index "<<mid;
            flag = 0;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
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
    cout<<"Enter the elements in sorted order: \n";
    for(int i = 0; i < n; ++i)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"\nEnter the element to be search:- ";
    cin>>key;
    binary_search(arr, n, key);
    return 0;
}
