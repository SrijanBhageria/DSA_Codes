#include<iostream>
#include<math.h>
using namespace std;
// function 
int power() {
    
    int a,b;
    cin>>a>>b;
    
    int ans=1;
    
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
    
}

int main(){

/*int a,b;
cin>>a>>b;

int ans=power(a,b);

cout<<"ans is "<<ans<<endl;

int c,d;
cin>>c>>d;

 ans=power(c,d);

cout<<"ans is "<<ans<<endl;
*/

//function declaration
int ans=power();
cout<<"the answer is "<<ans<<endl;

ans=power();
cout<<"the answer is "<<ans<<endl;

ans=power();
cout<<"the answer is "<<ans<<endl;
return 0;
}