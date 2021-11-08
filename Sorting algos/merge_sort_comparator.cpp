// given two array representing x and y coordinates sort them according y coordinates.

#include<iostream>
using namespace std;


void merge(pair<int, int> arr[], pair<int, int> left[], int l, pair<int, int> right[], int r)
{
    int i = 0, j = 0, k = 0;
    while (i < l && j < r)
    {
        if(left[i].first == right[i].first) {
            arr[k++] = (left[i].second < right[i].second) ? left[i++] : right[j++];
        }
        else if (left[i].first > right[j].first)
            arr[k++] = right[j++];
        else
            arr[k++] = left[i++];
    }
    while (i < l)
    {
        arr[k++] = left[i++];
    }
    while (j < r)
    {
        arr[k++] = right[j++];
    }
}

void merge_sort(pair<int, int> arr[], int n) {
    if(n >= 2) {
        int mid, i;
        mid = n / 2;
        pair<int, int> left[mid], right[n - mid];

        for (i = 0; i < mid; i++)
            left[i] = arr[i];

        for (i = mid; i < n; i++)
            right[i - mid] = arr[i];

        merge_sort(left, mid);
        merge_sort(right, n - mid);
        merge(arr, left, mid, right, n - mid);
    }
}

int main() {

    int n;
    cin>>n;

    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }

    merge_sort(arr, n);

    cout<<"After sorting:-\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    
    // 2 9
    // 2 3
    // 5 1
    // 4 2
    // 1 8
    // 2 4

    

}