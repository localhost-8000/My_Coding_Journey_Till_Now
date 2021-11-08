#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string bin,ans;
        cin>>n>>bin;
        for(int i=0;i<bin.length();i=i+2)
                ans+=bin[i];
        cout<<ans<<endl;
    }
}
