#include<bits/stdc++.h>
using namespace std;

int divisor_count(int a)
{
    int i,count,total=1;
    for(i=2;i<=a;i++)
    {
        count=0;
        if(a%i==0)
        {
            while(a%i==0)
            {
                count++;
                a/=i;
            }
            total=total*(count+1);
        }
    }
    return total;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        cout<<divisor_count(a)<<endl;
    }
}
