//...Euclidean algorithm...
//...The time complexity for the below algorithm is O(log(min(a,b)))

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);
}
