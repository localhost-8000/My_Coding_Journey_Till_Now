#include<iostream>
using namespace std;

//....time complexity:-O(exponent), Space complexity:-O(1)
int power1(int x, int y)
{
    if (y == 0)
        return 1;

    else if (y % 2 == 0)
        return power1(x, y / 2) * power1(x, y / 2);

    else
        return x * power1(x, y / 2) * power1(x, y / 2);
}

//...Above function can be optimized to O(logn) by calculating power(x, y/2) only once and storing it.

int power2(int x, int y)
{
    if(y == 0)
        return 1;

    int temp;
    temp = power2(x, y / 2);

    if (y % 2 == 0)
        return temp * temp;

    else                                  //...also work for float and negative numbers..by changing datatype
    {
        if(y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
}

int main()
{
    int x=2;
    int y=10;
    cout<<power1(x,y)<<endl;
    cout<<power2(x,y)<<endl;
}

