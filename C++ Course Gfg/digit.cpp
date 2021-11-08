#include<bits/stdc++.h>
//#include<cmath>
using namespace std;
int count_digit(int num){
    return floor(log10(num)+1);
}
int count_digit2(int num){
    if(num==0)
        return 0;
    return 1+count_digit2(num/10);
}
int main(){
    int num,digit,digit2;
    int start_s,start_t;
    cin>>num;
    start_s=clock();
    digit=count_digit(num);
    start_t=clock();
    cout<<digit<<endl;
    cout<<"time taken for logarithmic: "<<start_t-start_s/(double)CLOCKS_PER_SEC<<endl;
    start_s=clock();
    digit2=count_digit2(num);
    start_t=clock();
    cout<<digit2<<endl;
    cout<<"time taken for recursive: "<<start_t-start_s/(double)CLOCKS_PER_SEC<<endl;
}
