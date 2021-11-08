#include<iostream>
using namespace std;

int partiton(int arr[],int start,int last){
    int temp,pIndex=last;
    step1:
        while(arr[start]<=arr[pIndex]&&pIndex!=start)
            start++;
        if(pIndex==start)
            return pIndex;
        temp=arr[pIndex];
        arr[pIndex]=arr[start];
        arr[start]=temp;
        pIndex=start;
        goto step2;
    step2:
        while(arr[last]>=arr[pIndex]&&pIndex!=last)
            last--;
        if(pIndex==last)
            return pIndex;
        temp=arr[pIndex];
        arr[pIndex]=arr[last];
        arr[last]=temp;
        pIndex=last;
        goto step1;
}
void Quick_Sort(int arr[],int start,int last){
    if(start<last){
        int p=partiton(arr,start,last);
        Quick_Sort(arr,start,p-1);
        Quick_Sort(arr,p+1,last);
    }
}
int main(){
    cout<<"enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Quick_Sort(arr,0,n-1);
    cout<<"sorted array is: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
