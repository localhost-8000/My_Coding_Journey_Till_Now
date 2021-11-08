#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of rows:";
    int row;
    cin>>row;
    int i,j;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
