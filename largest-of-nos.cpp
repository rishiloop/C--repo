#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first num";
    cin>>a;
    cout<<"enter 2nd num";
    cin>>b;
    cout<<"enter 3rd num";
    cin>> c;
    if(a>=b && a>=c){
        cout<<a<<"is the greatest";    
    }
    else if(b>=a && b>=c){
        cout<<b<<"is greatest";
    }else{
        cout<<c<<"is greatest";
    }
    
return 0;
}