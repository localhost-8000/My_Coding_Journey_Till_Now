#include<iostream>
using namespace std;
int c=45;
int main(){
    /*int a,b,c;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the local value of c is:"<<c<<endl;
    cout<<"the global value of c is:"<<::c;
    float d=31.5f;
    long double e=31.5l;
    cout<<"the value of d is:"<<d<<endl<<"the value of e is:"<<e<<endl;
    cout<<"the size of 31.5 is:"<<sizeof(31.5)<<endl;
    cout<<"the size of 31.5f is:"<<sizeof(31.5f)<<endl;
    cout<<"the size of 31.5F is:"<<sizeof(31.5F)<<endl;
    cout<<"the size of 31.5l is:"<<sizeof(31.5l)<<endl;
    cout<<"the size of 31.5L is:"<<sizeof(31.5L)<<endl;  */
    // *********Referance Variables***********
    /*float x=22;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;  */
    // ************Typecasting***********
    float b=24.5;
    cout<<"The value of float b is:"<<b<<endl;
    cout<<"The value of int b is:"<<int(b)<<endl;
    int c=int(b);
    cout<<"The value of c is:"<<c<<endl;
    return 0;
}
