#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //constant in c++
    const int a=34;
    cout<<a<<endl;
    //a=23;             error will be occur....
    /* ***********Manipulator****************/
    int b=23,c=221,d=1256;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;
    return 0;
}
