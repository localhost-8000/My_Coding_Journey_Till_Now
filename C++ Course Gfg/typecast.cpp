#include<iostream>
using namespace std;
int main(){
    int x=10,y=20,a;
    double z;
    a=x/y;
    z=static_cast<double>(x)/static_cast<double>(y);
    cout<<a<<endl;
    cout<<z<<endl;

    bool res=(x==11)&&(x++);
    cout<<res<<" "<<x<<endl;

    //res = (x==11)||(x++);
    //cout<<res<<" "<<x<<endl;

    res = (x==10)||(x++);
    cout<<res<<" "<<x<<endl;

    int b=2,c=5,d=4,e;
    e=(b,c,d);
    cout<<e<<endl;  //a=(b,c) => a=c,......left to right assosciativity....(b,c)=> c &(c,d)=> d

    e=b,c,d;
    cout<<e<<endl;   //assignment operator first as higher precedence than , and hence e=b

    if(c>d>b)
        cout<<"yes"<<endl;    //relational operator has left to right ass...=> c>d return 1 and 1 !> b ...
    else
        cout<<"No"<<endl;
}
