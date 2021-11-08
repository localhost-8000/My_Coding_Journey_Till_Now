//...The Sieve of Eratosthenes is one of the most efficient ways to find the prime numbers smaller than n when n is smaller than around 10 million.

#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes_prime(int n)
{
    vector<bool> prime(n+1,true);
    for(int i=2; i*i <= n; ++i)
    {
        if(prime[i]==true)
        {
            for(int p=i*i;p<=n;p+=i)
            {
                prime[p]=false;
            }
        }
    }
    cout<<"Prime numbers less than "<<n<<" are : ";
    for(int i=2; i<=n; ++i)
    {
        if(prime[i])
            cout<<i<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the num.:";
    cin>>n;
    sieveOfEratosthenes_prime(n);
    return 0;
}
