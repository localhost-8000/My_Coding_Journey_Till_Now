#include <bits/stdc++.h>
#define ll long long int
#define uli unsigned long long int
#define vec(name, type, size, initialization) vector<type> name(size, initialization)
#define cin(arr, size) for(int i=0; i<size; ++i) cin >> arr[i]
#define cout(arr, size) for(int i=0; i<size; ++i) cout<<arr[i]<<" "

using namespace std;

//function to calculate x^y...x & y are positive.....
uli calcPower(int x, int y) {
    if(y == 0) {
        return 1;
    }
    uli temp;
    temp = calcPower(x, y/2);
    temp = temp * temp;
    if(y % 2 == 0) {
        return temp;
    }
    else {
        return x * temp;
    }
}




void solve() {
    int n;
    cin>>n;
    vec(coordinate, uli, n, 0);
    cin(coordinate, n);
    vec(height, uli, n, 0);
    cin(height, n);

    uli curr_height = coordinate[0] + height[0];
    vec(ans, uli, n, -1);
    for(int i=1; i<n; ++i) {
        if(curr_height >= coordinate[i]) {
            curr_height = (curr_height >= coordinate[i], height[i]) ? curr_height : coordinate[i] + height[i];
        } else {
            ans[i-1] = curr_height;
            curr_height = coordinate[i] + height[i];
        }
        cout<<"ht: "<<curr_height<<endl;
    }
    ans[n-1] = curr_height;
    for(int i=n-2; i>=0; --i) {
        if(ans[i] == -1) {
            ans[i] = ans[i+1];
        }
    }
    for(int i=0; i<n; ++i) {
        cout<<ans[i]<<endl;
    }
}




int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}



