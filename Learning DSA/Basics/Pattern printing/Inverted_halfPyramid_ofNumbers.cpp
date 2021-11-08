#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Number of rows: ";
    cin>>r;
    int i,j;
    for(i=r;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
