#include<iostream>
#include<cmath>
using namespace std;
int prime(int num){
    if(num==1)
        return 0;
    else{
        for(int j=2;j<=sqrt(num);j++){
            if(num%j==0)
                return 0;
        }
        return 1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l;
        cout<<" ";
        cin>>r;
        for(int i=l;i<=r;i++){
            if(prime(i))
                cout<<i<<endl;
        }
    }
    cout<<endl;
    return 0;
}
