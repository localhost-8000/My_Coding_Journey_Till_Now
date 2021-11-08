#include <iostream>
#include<cmath>
int d[1000]={0};
int len=0;
using namespace std;
void digit_array(int a)
{
	while(a!=0)
	{
		d[len]=a%10;
		a=a/10;
		len++;
	}
}
int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		digit_array(max(a,b));
		int i=0,carry=0;
		int c=min(a,b);
		cout<<c<<endl<<len<<endl;
		while(i<len)
		{
			d[i]*=c;
			d[i]+=carry;
			carry=d[i]/10;
			cout<<carry<<endl;
			d[i]%=10;
			cout<<d[i]<<endl;
			i++;
		}
		cout<<carry;
		len--;
		while(len>=0)
		{
			cout<<d[len];
			len--;
		}
		cout<<endl;
	}

	return 0;
}
