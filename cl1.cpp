#include<iostream>
using namespace std;

class dist{
    int a, b;
public:
    dist(int x, int y) {
        a = x;
        b = y;
    }
    int sq(dist a1, dist a2)
    {
        return a1.a*a1.a + a2.a*a2.a;
    }
};

int main()
{
    dist o1(3, 4);
    dist o2(7, 5);
    dist o3(5, 6);
    cout<<o3.sq(o1, o2);
}
