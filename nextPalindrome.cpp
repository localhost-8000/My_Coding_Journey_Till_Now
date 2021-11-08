#include <iostream>
using namespace std;

bool ifAll9(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=9)
            return false;
    }
    return true;
}

void nextPalindrome(int arr[],int n){
    int mid=n/2;
    int i,j,ls=0;
    i=mid-1;
    j=(n%2)?mid+1:mid;
    while(i>=0&&arr[i]==arr[j]){
        i--;
        j++;
    }
    if(i<0||arr[j]<arr[i])
        ls=1;
    while(i>=0){
        arr[i]=arr[j];
        i--;
        j++;
    }
    if(ls){
        int carry=1;
        i=mid-1;
        if(n%2==1){
            arr[mid]+=carry;
            carry=arr[mid]/10;
            arr[mid]%=10;
            j=mid+1;
        }
        else
            j=mid;
        while(i>=0){
            arr[j]+=carry;
            carry=arr[j]/10;
            arr[j]%=10;
            arr[i--]=arr[j++];
        }
    }
}

int main() {

	int t;
	scanf("%d",&t);
	while(t--){
		long long int a,temp;
		scanf("%lld",&a);
		//cout<<a<<endl;
		int n=0,dig=0;
		temp=a;
		while(temp!=0){
            temp=temp/10;
            dig++;
		}
		temp=a;
		int arr[dig];
		while(temp!=0){
			arr[n++]=temp%10;
			temp=temp/10;
		}
        if(a!=0){
            if(ifAll9(arr,n)){
                printf("%d",a+2);
            }
            else{
                nextPalindrome(arr,n);
                for(int i=n-1;i>=0;i--)
                    printf("%d",arr[i]);
            }
        }
        else
            cout<<"1";
		cout<<endl;
	}
	return 0;
}
