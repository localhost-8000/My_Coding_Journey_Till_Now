#include<bits/stdc++.h>
using namespace std;

bool isnumber(char c)
{
    if(c>='0'&&c<='9')
        return true;
    else
        return false;
}

bool isPalindrome(string &str)
{
    std::stack<char> s;
    int i;
    for(i=0;i<str.length();i++)
        s.push(str[i]);
    string str1="";
    while(!s.empty())
    {
        str1+=s.top();
        s.pop();
    }
    if(str1==str)
        return true;
    else
        return false;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str,str1,str2;
	    cin>>str;
	    int i,j,num=0;
	    for(i=0;i<str.length();i++)
	    {
	        if(isnumber(str[i]))
	        {
	            num=str[i];
	        }
	        else if(str[i]=='-')
	        {
	            j=i-1;
	            while(str[j]!='+')
	            {
	                j--;
	            }
	            str1=str.substr(j+1,i-j-1);
	            while(num!=0)
	            {
	                str2+=str1;
	                num--;
	            }
	        }
	    }
	    cout<<str2<<endl;
	    if(isPalindrome(str2))
	        cout<<"Continue"<<endl;
	    else
	        cout<<"Return"<<endl;
	}
	return 0;
}
