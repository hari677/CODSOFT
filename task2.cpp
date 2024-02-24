#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"ENTER ANY TWO NUMBER:";
    cin>>a>>b;
    cout<<"ENTER THE OPERATOR + - / X:";
     char op;
     cin>>op;
     switch(op){
 case'+':
    cout<<a<<"+"<<b<<"="<<a+b;
    break;
case'-':
    cout<<a<<"-"<<b<<"="<<a-b;
    break;
case'/':
    cout<<a<<"/"<<b<<"="<<a/b;
    break;
case'x':
    cout<<a<<"x"<<b<<"="<<a*b;
    break;
     }


}
