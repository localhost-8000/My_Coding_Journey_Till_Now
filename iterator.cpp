#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    auto it = find(arr.begin(), arr.end(), 'f')-arr.begin();
    cout<<it;
    int t=5;
    if(it==t)
        cout<<"jdh";
}
