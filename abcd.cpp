#include<bits/stdc++.h>
using namespace std;

int cntsbar(int arr[], int n, int k)
{
    unordered_map<int, int> umap;
    int cnt=0, p=0;
    for(int i=0; i<n; ++i)
    {
        if(umap.find(arr[i]) == umap.end())
        {
            umap[arr[i]]++;
        }
        else
        {
            umap[arr[i]]++;
            if(umap[arr[i]] >= 2)
            {
                p++;
            }
        }
        if(p>=k)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int arr[5] = {0, 1, 0, 1, 0};
    cout<<cntsbar(arr, 5, 2);
}
