#include<iostream>
using namespace std;

int main()
{
    cout<<"number of rows: ";
    int r;
    cin>>r;
    int i,j,k;
    int count=0;
    int num;
    for(i=1;i<=r;i++)
    {
        count=1;
        for(j=r;j>i;j--)
        {
            count++;
            cout<<"  ";
        }
        num=i;
        for(k=1;k<=2*i-1;k++)
        {
            if(count<r)
            {
                cout<<num<<" ";
                ++num;
            }
            else if(count==r)
            {
                cout<<num<<" ";
                --num;
            }
            else
            {
                cout<<num<<" ";
                --num;
            }
            count++;
        }
        cout<<endl;
    }
}
