#include<iostream>
using namespace std;

class fruit
{
    int a;
    public:
        fruit();
        void output();
};

fruit::fruit()
{
    cout<<"For Apple enter 1\n";
    cout<<"For Banana enter 2\n";
    cout<<"Enter your choice:- ";
    cin>>a;
}

void fruit::output()
{
    switch(a)
    {
        case 1:
            cout<<"\nProperties of Apple:-\n";
            cout<<"Color:- Red\n";
            cout<<"Taste:- Sweet\n";
            cout<<"Cost:- 80 Rs/kg\n";
            break;
        case 2:
            cout<<"\nProperties of Banana:-\n";
            cout<<"Color:- Yellow\n";
            cout<<"Taste:- Sweet\n";
            cout<<"Cost:- 40 Rs/kg\n";
            break;
        default:
            cout<<"Invalid input !";
    }
}

int main()
{
    fruit ob;
    ob.output();
}
