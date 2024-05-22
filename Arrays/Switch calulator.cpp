#include<iostream>
#include<math.h>
using namespace std;

int main(){

int a,b;

cout<<"enter the value of a"<<endl;
cin>>a;

cout<<"enter the value of b"<<endl;
cin>>b;

char op;
cout<<"enter the operation you want to perform"<<endl;
cin>>op;

switch( op ){
    
    case '+': cout<<"required answer is "<<a+b<<endl;
                break;
    
    case '/': cout<<"required answer is "<<(a/b)<<endl;
                break;
    case '*': cout<<"required answer is "<<(a*b)<<endl;
                break;
    case '%': cout<<"required answer is "<<(a%b)<<endl;
                break;
    case '-': cout<<"required answer is "<<(a-b)<<endl;
                break;
    default: cout<<"Invalid answer"<<endl;
                break;
}

return 0;
}