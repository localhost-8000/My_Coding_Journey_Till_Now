#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
        num()
        {
            count++;
            cout<<"object "<<count<<" is created\n";
        }
        ~num()
        {
            cout<<"object "<<count<<" is destroyed\n";
            count--;
        }
};

int main()
{
    num num1, num2, num3, num4, num5;
    return 0;
}
