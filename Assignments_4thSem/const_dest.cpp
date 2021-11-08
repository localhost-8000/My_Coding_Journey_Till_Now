#include<iostream>
using namespace std;

class prompt
{
    int n;
    public:
        prompt(char*);
        void take_input();
        ~prompt();
};

prompt::prompt(char* a)
{
    cout<<"Your string is: "<<a<<endl;
}

void prompt::take_input()
{
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cout<<"Ringing bell.....\a\n";
    }
}

prompt::~prompt()
{
    cout<<"Destructing.....\n";
}

int main()
{
    char a[10];
    cout<<"Enter a string: ";
    cin>>a;
    prompt ob(a);
    ob.take_input();
    return 0;
}
