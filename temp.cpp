#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr{{1,2,3}, {-4,-3,-2,-1}};
    auto it1 = lower_bound(arr[1].begin(), arr[1].end(), 0) - arr[1].begin()-1;
    auto it2 = upper_bound(arr[1].begin(), arr[1].end(), 0) - arr[1].begin();
    cout << it1 << endl;
    int t = it2;
    cout << t;

}
