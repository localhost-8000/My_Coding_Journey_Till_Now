#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    /*ll n,i;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll cnt,num,a,minm;
    cnt=arr[0]-1;
    //num=ceil(sqrt(arr[2]));
    num=arr[n-1];
    minm=num;
    i=2;
    while(i<sqrt(num)){
        if(abs(num-(pow(i,n-1))<minm)
           minm=abs(num-(pow(i,n-1)));
        i+=2;
    }
    for(i=1;i<n;i++){
        a=pow(num,i);
        cnt+=abs((arr[i]-a));
    }
    cout<<cnt; */
    ll n,i;
    cin>>n;
    ll arr[n];
    for(i=1;i<=n;i++)
        cin>>arr[i];
    ll lb,rb,len;
    cout<<"1 1"<<endl;
    cout<<-arr[1]<<endl;
    i=2;
    if(n>=2){
        if(n%2==0){
            lb=2;
            rb=n;
            len=rb-lb+1;
            for(i=lb;i<=rb;i++){
                if(arr[i]%2!=0){
                    cout<<
                }
            }
        }
    }




}
