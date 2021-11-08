#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j;
        cin>>n;
        vector<string> str(n);
        int arr[256]={0};
        for(i=0;i<n;i++){
            cin>>str[i];
            for(j=0;j<str[i].size();j++){
                arr[(int)str[i][j]]++;
            }
        }
        for(i=97;i<123;i++){
            if(arr[i]!=0){
                if(arr[i]%n!=0){
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(i==123)
            cout<<"YES"<<endl;
    }
}
