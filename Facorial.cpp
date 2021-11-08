#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--)
    {
		int num;
		cin>>num;
		int a=2;
		int arr[10000];
		arr[0]=1;
		int len=1;
		int x,carry;
		while(a<=num)
		{
			x=0;
			carry=0;
			while(x<len)
			{
				arr[x]*=a;
				arr[x]+=carry;
				carry=arr[x]/10;
				arr[x]=arr[x]%10;
				x++;
			}
			while(carry!=0)
			{
				arr[len]=carry%10;
				carry/=10;
				len++;
			}
			a++;
		}
		len--;
		while(len>=0){
			cout<<arr[len];
			len--;
		}
		cout<<endl;
	}

	return 0;
}
