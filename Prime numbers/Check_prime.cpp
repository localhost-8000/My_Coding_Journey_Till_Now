#include <bits/stdc++.h>
using namespace std;

int isPrime(int N)                          //....complexity...O(n)
{
    if(N==1)
        return 0;
    for(int i=2; i*i <= N; ++i)
    {
        if(N%i==0)
        {
            return 0;
        }
    }
    return 1;
}

//..The algorithm can be improved further by observing that all primes are of the form 6k ± 1, with the exception of 2 and 3. This is because all integers can be expressed as (6k + i) for some integer k and for i = -1, 0, 1, 2, 3, or 4; 2 divides (6k + 0), (6k + 2), (6k + 4); and 3 divides (6k + 3). So a more efficient method is to test if n is divisible by 2 or 3, then to check through all the numbers of form 6k ± 1.

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int main()
{
    isPrime(81) ? cout << " true\n" : cout << " false\n";
    isPrime(29) ? cout << " true\n" : cout << " false\n";
    return 0;
}
