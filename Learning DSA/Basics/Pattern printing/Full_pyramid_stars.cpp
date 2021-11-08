#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"number of rows: ";
    cin>>r;
    int i,j,k;
    for(i = 1; i <= r; i++)
    {
        for(j = r; j > i; j--)
        {
            cout<<"  ";
        }
        for(k = 1; k <= 2*i-1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
