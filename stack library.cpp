#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a,b;
    scanf("%d",&a);
    stack<int> p;                  //creating a stack of name p
    p.push(a);
    b=p.top();
    printf("%d\n",b);
    p.pop();
    printf("%d\n",p.empty());
    return 0;
}
