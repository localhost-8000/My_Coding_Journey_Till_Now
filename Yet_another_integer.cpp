#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int a,b,res;
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<endl;
        }
        else{
            res=abs(a-b);
            res=res/10;
            cout<<res+1<<endl;
        }
    }
}
