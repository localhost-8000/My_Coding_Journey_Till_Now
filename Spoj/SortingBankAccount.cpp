#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> str(n);
		int i;
		for(i=0;i<n;i++)
		{
			int t=6;
			while(t--)
			{
				string temp;
				cin>>temp;
				str[i]+=temp;
				str[i]+=" ";
			}
		}
		int flag=1;
		sort(str.begin(),str.end());
		for(i=0;i<n-1;i++)
		{
			if(str[i] != str[i+1])
			{
				cout<<str[i]<<" "<<flag<<endl;
				flag=1;
			}
			else
			{
				flag++;
			}
		}
		cout<<str[i]<<" "<<flag<<endl<<endl;
	}

	return 0;
}
