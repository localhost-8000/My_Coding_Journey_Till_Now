#include<iostream>
using namespace std;
union alignas(64) size{
    int c,m;
     double a,nj,kh;
     int x;
     double am;
     int ooo;
     double vf;
};

struct size1{
    int c,b;
     double a;
     int x;
     double am,yt,mj;
     int ooo;
     double vf;
};
int main(){
    /*int x=10,y=20,z;
        //printf("%d\n",printf("hello"));
        //printf("%d",scanf("%d",&a));
 //if(y<10)if(y>0)x=30;
 //else x=50;
 double b=8.99;
 float a=8.99;
 if(a==b)
 printf("success");
 else
    printf("no");
    if(z)
        printf("hi");

    int* p,*q;
    p=&x;
    q=&x;
    printf("%u %u",p,q); */
    size a;
    size1 b;
    cout<<sizeof(double)<<"......"<<sizeof(char)<<endl;
    cout<<sizeof(a)<<"......"<<sizeof(b)<<endl;
    cout<<5.5-3<<endl;
}

