#include <iostream>
using namespace std;

void Merge(int arr[], int left[], int l, int right[], int r)
{
    int i = 0, j = 0, k = 0;
    while (i < l && j < r)
    {
        if (left[i] > right[j])
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

void Merge_Sort(int arr[], int n)
{
    if (n >= 2)
    {
        int mid, i;
        mid = n / 2;
        int left[mid], right[n - mid];

        for (i = 0; i < mid; i++)
            left[i] = arr[i];

        for (i = mid; i < n; i++)
            right[i - mid] = arr[i];

        Merge_Sort(left, mid);
        Merge_Sort(right, n - mid);
        Merge(arr, left, mid, right, n - mid);
    }
}

int main()
{
    cout << "enter the size of array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Merge_Sort(arr, n);
    cout << "sorted array is: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
