#include<iostream>
#include<math.h>
using namespace std;

bool IsEven(int a){
    
    //odd
    if(a&1) {
        return 0;
    }
    
    return 1;
}


int main(){
    
    int  num;
    cout<<"enter the number "<<endl;
    cin>>num;
    
    if(IsEven(num)){
        cout<<"Number is even "<<endl;
    }
    
    else {
        cout<<"Number is odd "<<endl;
    }


return 0;
}