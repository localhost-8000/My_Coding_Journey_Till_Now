#include<iostream>
using namespace std;

void checkPrime(int n)
{
    int i=2;
    for(i = 2; i<n; ++i)
    {
        if(n % i == 0)
        {
            break;
        }
    }

    if(i == n)
    {
        cout<<"Number "<<n<<" is prime\n";
    }
    else
    {
        cout<<"Number "<<n<<" is not prime\n";
    }
}


int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    checkPrime(n);
    return 0;
}
