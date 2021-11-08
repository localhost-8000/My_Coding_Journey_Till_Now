#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long double num;
        cin>>num;
       /* long int mid,i,sum=0;
        if(num%2==0)
            mid=num/2;
        else
            mid=num/2+1;
        int cnt=0;
        for(i=1;i<=mid;i++){
            sum+=i;
            if(sum==num){
                cnt++;
                sum=0;
            }
            else if(sum>num){
                i-=1;
                sum=0;
            }
        }
        cout<<cnt<<endl; */
        long double i,beta;
        int cnt=0;
        for(i=2;i<ceil(sqrt(2*num));i++){
            cout<<ceil(sqrt(2*num))<<endl;
            beta=((num/i)-(i/2)+0.5);
            int n_beta=(int)beta;
            cout<<beta<<" "<<n_beta<<endl;
            if(beta==n_beta)
                cnt+=1;
        }
        cout<<cnt<<endl;
    }
}
