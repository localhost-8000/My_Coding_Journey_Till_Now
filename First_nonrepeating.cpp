#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string....";
    cin>>str;


    pair<int,int> arr[256];         //default initialised as 0
    int res=INT_MAX,i;
    for(i=0;i<str.length();i++){
        arr[(int)str[i]].first++;
        arr[(int)str[i]].second=i;
    }
    for(i=0;i<256;i++){
        if(arr[i].first!=0){
            if(arr[i].first==1)
                res=min(arr[i].second,res);
        }
    }


    if(res!=INT_MAX)
        cout<<"First non repeating character is "<<str[res];
    else
        cout<<"All characters are repeating...";
}
