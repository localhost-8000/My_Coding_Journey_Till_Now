#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> p;

    //Insert operation......
    p.insert(11);
    p.insert(36);
    p.insert(11);
    p.insert(35);
    cout<<p.size()<<endl;

    //Search operation......
    if(p.find(11)!=p.end())
        cout<<"11 Present"<<endl;
    else
        cout<<"11 Not present"<<endl;

    if(p.find(15)!=p.end())
        cout<<"15 Present"<<endl;
    else
        cout<<"15 Not present"<<endl;

    //Delete operation.......
    p.erase(11);
    if(p.find(11)!=p.end())
        cout<<"11 Present"<<endl;
    else
        cout<<"11 Not present"<<endl;

    cout<<p.size()<<endl;
}
