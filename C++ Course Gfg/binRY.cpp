#include<bits/stdc++.h>
using namespace std;

int all_1(string binary,int n){
    for(int i=0;i<2n-1;i++){
        if(binary[i]!='1')
            return 0;
    }
    return 1;
}
int all_0(string binary,int n){
    for(int i=0;i<2n-1;i++){
        if(binary[i]!='0')
            return 0;
    }
    return 1;
}
void getstring(string binary,int n){
    char record;
    int i;
    string bin("0");

    for(i=0;i<n;i++){
        j=0
        if(bin[j]!=binary[i]){
            while(j<)
        }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        string binary;
        getline(cin,binary);
        if(all_1(binary,n)){
            for(i=0;i<n;i++)
                cout<<1;
        }
        else if(all_0(binary,n)){
            for(i=0;i<n;i++)
                cout<<0;
        }
        else
            getstring(binary,n);
    }
    cout<<endl;
}
