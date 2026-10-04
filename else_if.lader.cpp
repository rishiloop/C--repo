#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    char op;
    cout<<"enter the num";
    cin>>num1;
    cout<<"enter the num2";
    cin>>num2;
    cout<<"enter the op";
    cin>>op;
    int result;
    if(op=='+')cout<<num1+num2;
    else if(op=='-')cout<<num1-num2;
    else if(op=='*')cout<<num1*num2;
    else if(op=='/')cout<<num1/num2;
    else{
        cout<<"invalid op";
    }
    return 0;
}