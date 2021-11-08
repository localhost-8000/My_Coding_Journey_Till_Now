#include<iostream>
using namespace std;

int main()
{
    cout<<"Number of rows: ";
    int r;
    cin>>r;
    int i,j;
    for(i=1;i<=r;i++)
    {
        for(j=r;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
