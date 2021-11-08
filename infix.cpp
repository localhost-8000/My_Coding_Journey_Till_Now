/* #include<iostream>
#include<stack>
using namespace std;
int main(){
    int a,b;
    scanf("%d",&a);
    stack<int> p;                  //creating a stack of name p
    p.push(a);
    b=p.top();
    printf("%d\n",b);
    //p.pop();
    printf("%d\n",p.empty());
    cout<<2<<'^'<<5;
    return 0;
} */
#include<iostream>
#include<strings.h>
#include<string>
#include<stack>
using namespace std;
bool isoperator(char C){
	if(C=='+'||C=='-'||C=='*'||C=='/'||C=='^')
		return true;
	else
		return false;
}
bool isoperand(char C){
	if(C>='a'||C<='z')
		return true;
	else
		return false;
}
void getpostfix(string exp){
	stack<char> s;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='(')
			s.push(exp[i]);
		else if(isoperand(exp[i]))
			cout<<exp[i];
		else if(isoperator(exp[i])){
			while(!s.empty()&&s.top()!='('){
				cout<<s.top();
				s.pop();
			}
			s.push(exp[i]);
		}
		else if(exp[i]==')'){
			while(!s.empty()&&s.top()!='('){
				cout<<s.top();
				s.pop();
			}
			s.pop();
		}
	}
	while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}

int main() {

	int t;
	cin>>t;
	fflush(stdin);
	while(t--){
        char exp[400];
		gets(exp);
		puts(exp);
		getpostfix(exp);
	}
	return 0;
}
