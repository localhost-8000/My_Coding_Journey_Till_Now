/*
   Euler's totient function Φ(n) is define as " it is the count of integers k in the range 1 ≤ k ≤ n for which the greatest common divisor gcd(n, k) is equal to 1 ".
   For example, the totatives of n = 9 are the six numbers 1, 2, 4, 5, 7 and 8. They are all relatively prime to 9, but the other three numbers in this range, 3, 6, and 9 are not, since gcd(9, 3) = gcd(9, 6) = 3 and gcd(9, 9) = 9.

 ***..value of Φ(n) is equal to n multiplied by product of (1 – 1/p) for all prime factors p of n. For example value of Φ(6) = 6 * (1-1/2) * (1 – 1/3) = 2.

   Some Interesting Properties of Euler’s Totient Function
1) For a prime number p, Φ(p) is p-1. For example Φ(5) is 4, Φ(7) is 6 and Φ(13) is 12. This is obvious, gcd of all numbers from 1 to p-1 will be 1 because p is a prime.
2) For two numbers a and b, if gcd(a, b) is 1, then Φ(ab) = Φ(a) * Φ(b). For example Φ(5) is 4 and Φ(6) is 2, so Φ(30) must be 8 as 5 and 6 are relatively prime.
3) For any two prime numbers p and q, Φ(pq) = (p-1)*(q-1). This property is used in RSA algorithm.
4) If p is a prime number, then Φ(pk) = pk – pk-1. This can be proved using Euler’s product formula.
5) Sum of values of totient functions of all divisors of n is equal to n.
6) The most famous and important feature is expressed in Euler’s theorem :
        The theorem states that if n and a are coprime (or relatively prime) positive integers, then
                aΦ(n) Φ 1 (mod n)

   */


// C++ program to calculate Euler's Totient Function
#include <bits/stdc++.h>
using namespace std;

int phi(int n)
{
    // Initialize result as n
    int result = n;

    // Consider all prime factors of n
    // and subtract their multiples
    // from result
    for(int p = 2; p * p <= n; ++p)
    {

        // Check if p is a prime factor.
        if (n % p == 0)
        {

            // If yes, then update n and result
            while (n % p == 0)
                n /= p;

            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;

    return result;
}

// Driver code
int main()
{
    int n;
    for(n = 1; n <= 10; n++)
    {
        cout << "Phi" << "("
             << n << ")" << " = "
             << phi(n) << endl;
    }
    return 0;
}

/*
// C++ program to compute Totient function for all numbers smaller than or equal to n.
#include<iostream>
using namespace std;

// Computes and prints totien of all numbers
// smaller than or equal to n.
void computeTotient(int n)
{
	// Create and initialize an array to store
	// phi or totient values
	long long phi[n+1];
	for (int i=1; i<=n; i++)
		phi[i] = i; // indicates not evaluated yet
					// and initializes for product
					// formula.

	// Compute other Phi values
	for (int p=2; p<=n; p++)
	{
		// If phi[p] is not computed already,
		// then number p is prime
		if (phi[p] == p)
		{
			// Phi of a prime number p is
			// always equal to p-1.
			phi[p] = p-1;

			// Update phi values of all
			// multiples of p
			for (int i = 2*p; i<=n; i += p)
			{
			// Add contribution of p to its
			// multiple i by multiplying with
			// (1 - 1/p)
			phi[i] = (phi[i]/p) * (p-1);
			}
		}
	}

	// Print precomputed phi values
	for (int i=1; i<=n; i++)
	cout << "Totient of " << i << " is "
		<< phi[i] << endl;
}

// Driver program to test above function
int main()
{
	int n = 12;
	computeTotient(n);
	return 0;
}
*/
