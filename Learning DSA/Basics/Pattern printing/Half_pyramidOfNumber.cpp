#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of rows: ";
    int r;
    cin>>r;
    int i,j;
    for(i = 1; i <= r; i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
