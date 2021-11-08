#include<iostream>
#include<cmath>
using namespace std;

int find_first_repeating(string str){
    int arr[256];
    int i,res=INT_MAX;
    for(i=0;i<256;i++)
        arr[i]=-1;
    for(i=0;i<str.length();i++){
        if(arr[(int)str[i]]==-1)
            arr[(int)str[i]]=i;
        else
            res=min(res,arr[(int)str[i]]);
    }
    if(res!=INT_MAX)
        return res;
    else
        return -1;
}
int main(){
    string str;
    cout<<"Enter the string...";
    cin>>str;
    int i=find_first_repeating(str);
    if(i!=-1)
        cout<<"First repeating character is "<<str[i];
    else
        cout<<"Np repeatation found...";
}
