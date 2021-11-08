#include<iostream>
using namespace std;

class fruit
{
    int u=40;
    public:
        friend void fun(fruit);
        fruit()
        {
            cout<<u<<endl;
        }
        void f()
        {
            cout<<u<<endl;
        }
};

void fun(fruit f)
{
    cout<<f.u<<endl;
    f.u = 50;
    f.f();
    cout<<f.u<<endl;
    cout<<"hello:\n";
}

int main()
{
    fruit apple;
    fun(apple);
    apple.f();
    return 0;
}
