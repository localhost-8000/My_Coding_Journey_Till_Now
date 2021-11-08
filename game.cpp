/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float avg,temp;
        scanf("%lf",&avg);
        int match=1;
        int score=(int)avg;
        while(score!=avg){
            avg=avg*(++match);
            score=(int)avg;
        }
        cout<<match<<endl;
    }
    return 0;
} */
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
            return b;
    else if(b==0)
            return a;
    else
        gcd(b,a%b);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        double avg;
        cin>>avg;




        int fract;
        int dup=(int)avg;
        if(avg-dup==0){
            fract=1;
            cout<<avg-dup<<endl;
        }
        else{
            fract=10000;
            cout<<avg-dup<<endl;
        }
        int div,match;
        div=gcd(fract,(fract*avg));
        match=fract/div;
        cout<<match<<endl;
    }
    return 0;
}
