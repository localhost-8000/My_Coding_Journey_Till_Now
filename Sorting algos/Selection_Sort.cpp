#include<iostream>
using namespace std;

void Selection_Sort(int arr[],int n){
    int temp,last=n-1;
    for(int i=0;i<n-1;i++){
        int max=0;
        for(int j=1;j<n-i;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        temp=arr[last];
        arr[last]=arr[max];
        arr[max]=temp;
        last--;
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
    Selection_Sort(arr,n);
    cout<<"sorted array is: "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
