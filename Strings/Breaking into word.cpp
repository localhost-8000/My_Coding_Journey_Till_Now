#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    stringstream w;
    string temp;
    w << str;
    str="";
    while(!w.eof())
    {
        w >> temp;
        str=str+temp;
    }
    cout<<str;
}
