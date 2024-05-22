#include<iostream>
#include<math.h>
using namespace std;

bool IsPrime(int n){
    
    for(int i=2; i<n; i++){
        
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
}

int main() {
   
    int n;
    cin>>n;
    
    if(IsPrime(n)){
        cout<<"Number is Prime "<<endl;
    }
    else {
        cout<<"Number is not Prime "<<endl;
    }
    
}
    
    
    
    
