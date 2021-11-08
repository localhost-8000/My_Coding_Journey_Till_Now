#include<iostream>
using namespace std;

void convert_InfixToPostfix(string exp){
    stack<char> s;
    int i;
    for(i=0;i<exp.length();i++){
        if(exp[i]=='(')
            s.push(exp[i]);
        else if(isOperand(exp[i]))
            cout<<exp[i];
        else if(isOperator(exp[i])){
            while(s.top()!='('&&has_HigherPrecedence(exp[i],s.top())&&)
        }
    }
}

int main(){
    string exp;
    getline(cin,exp);
    convert_InfixToPostfix(exp);
    cout<<exp;
}
