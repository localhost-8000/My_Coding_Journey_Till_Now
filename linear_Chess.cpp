#include <iostream>
#include<algorithm>
using namespace std;
int binaryFind(int*,int,int);
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int a[n],i;
	    for(i=0;i<n;i++){
	        scanf("%d",a[i]);
	    }
	    sort(a,a+n);
	    int minm=binaryFind(a,n,k);
	    cout<<minm<<endl;
	}
	return 0;
}

int binaryFind(int a[],int n,int k){
    int start,last,mid,mn=-1;
    start=0;
    last=n-1;
    while(start<=last){
        mid=(start+last)/2;
        if(k%a[mid]==0){
            mn=a[mid];
            start=mid+1;
        }
        else if(a[mid]<k)
            last=mid-1;
        else
            start=mid+1;
    }
    return mn;
}
