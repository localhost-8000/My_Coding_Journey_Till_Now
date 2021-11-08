#include<bits/stdc++.h>
using namespace std;

int find_pair(int a[],int left,int right,int x){
    int sum;
    while(left<right){
        sum=a[left]+a[right];            //worst case.....O(n)....
        if(sum==x)
            return 1;
        else if(sum>x)
            right--;
        else
            left++;
    }
    return 0;
}

int find_triplet(int a[],int n,int x){
    int i;
    for(i=0;i<n-1;i++){
        if(find_pair(a,i+1,n-1,x-a[i]))             // O(n square)....
            return 1;
    }
    return 0;
}


int main(){
    int n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the sorted array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int num,res;
    cout<<"enter the sum to search that a pair in given array has: "<<endl;
    cin>>num;
    res=find_pair(a,0,n-1,num);
    if(res)
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;

    int num1,res1;
    cout<<"enter the sum to search that a triplet in given array has: "<<endl;
    cin>>num1;
    res1=find_triplet(a,n,num1);
    if(res1)
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
}

