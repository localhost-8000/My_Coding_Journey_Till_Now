#include<bits/stdc++.h>
#define l long int
using namespace std;

long long int find_minProduct(l a,l b,l x,l y,l n){
    l res_a,res_b,rem_n;
    if(a-n>=x){
        res_a=a-n;
        rem_n=0;
    }
    else{
        res_a=x;
        rem_n=n-(a-x);
    }
    res_b=b-rem_n;
    return res_a*res_b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        l a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        if(a==b){
            if(a-n>=x){
                cout<<(a-n)*b<<endl;
            }
            else if(b-n>=y)
                cout<<(b-n)*a<<endl;
        }
        else if(a-n>=x){
            cout<<(a-n)*b;
        }
        else if(b-n>=y){
            cout<<(b-n)*a;
        }
        else{
            if(min(a,b)==a)
                cout<<find_minProduct(a,b,x,y,n)<<endl;
            else
                cout<<find_minProduct(b,a,y,x,n)<<endl;
        }
    }
}
