#include<iostream>
#include<cmath>
using namespace std;

int power1(int x, int y)
{
   int i,power=1;
   if(y == 0)
   return 1;
   for(i=1;i<=y;i++)
       power*=x;
   return power;
}

//....using inbuilt function...
int power2(int x, int y)
{
    return pow(x,y);
}


int main() {
   int x = 2;
   int y = 10;
   cout<<"x = "<<x<<endl;
   cout<<"y = "<<y<<endl;
   cout<<"x^y = "<<power1(x,y)<<endl;
   cout<<"x^y = "<<power2(x,y);
   return 0;
}
