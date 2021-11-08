#include<bits/stdc++.h>
using namespace std;

string Multiply(string str1,string str2)
{
	int len1=str1.length();
	int len2=str2.length();
	if(len1==0 || len2==0)
		return "0";

	vector<int> res(len1+len2,0);
	int pos1=0;
	int pos2=0;
	int i;
	for(i=len1-1;i>=0;i--)
	{
		int n1=str1[i]-'0';
		int carry=0;
		pos2=0;
		for(int j=len2-1;j>=0;j--)
		{
			int n2=str2[j]-'0';
			int sum=n1*n2+res[pos1+pos2]+carry;
			carry=sum/10;
			res[pos1+pos2]=sum%10;
			pos2++;
		}
		if(carry>0)
			res[pos1+pos2]+=carry;
		pos1++;
	}
	i=res.size()-1;
	while(i>=0 && res[i]==0)
		i--;
	if(i==-1)
		return "0";
	string s="";
	while(i>=0)
	{
		s+=std::to_string(res[i--]);
	}
	return s;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		if( (str1.at(0) == '-' || str2.at(0)=='-') && (str1.at(0)!='-'||str2.at(0)!='-'))
			cout<<"-";
		if(str1.at(0)=='-' && str2.at(0)!='-')
        {
            str1 = str1.substr(1);
        }
        else if(str1.at(0)!='-' && str2.at(0)=='-')
        {
            str2 = str2.substr(1);
        }
        else if(str1.at(0)=='-' && str2.at(0)=='-')
        {
            str1 = str1.substr(1);
            str2 = str2.substr(1);
        }
        cout<<Multiply(str1,str2)<<endl;
	}
}
