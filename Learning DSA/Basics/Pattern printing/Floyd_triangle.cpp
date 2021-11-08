#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"enter number of rows: ";
    cin>>r;
    int i,j,num=1;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
