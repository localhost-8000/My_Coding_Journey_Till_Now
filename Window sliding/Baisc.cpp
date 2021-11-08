/*

Given an array of integers of size ‘n’.
Our aim is to calculate the maximum sum of ‘k’
consecutive elements in the array.

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.

Input  : arr[] = {2, 3}
         k = 3
Output : Invalid
There is no subarray of size 3 as size of whole
array is 2.

*/

#include<bits/stdc++.h>
using namespace std;

//...Brute force...O(n*k)

int subarray_sum1(int arr[],int n,int k)
{
    int max_sum=0;
    int i,j;
    for(i=0;i<n-k+1;i++)
    {
        int curr_sum=0;
        for(j=0;j<k;j++)
        {
            curr_sum+=arr[i+j];
        }
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}

//...Window sliding technique...O(n)..

int subarray_sum2(int arr[],int n,int k)
{
    int max_sum=0;
    for(int i=0;i<k;i++)
    {
        max_sum+=arr[i];
    }
    int curr_sum=max_sum;
    for(int i=k;i<n;i++)
    {
        curr_sum+=arr[i];
        curr_sum-=arr[i-k];
        max_sum=max(max_sum,curr_sum);
    }
    return max_sum;
}

int main()
{
    int arr[]={1,9,-1,-2,7,3,-1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    cout<<subarray_sum1(arr,n,k)<<endl;
    cout<<subarray_sum2(arr,n,k)<<endl;
}



