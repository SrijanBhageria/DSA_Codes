#include<iostream>
#include<math.h>
using namespace std;

int SetBitA(int a){
    
    int count=0;
    while(a!=0){
        
        if(a&1){
            count++;
            
            a=a>>1;
        }
    }
    return count;
}

int SetBitB(int b){
    
    int count=0;
   while(b!=0){
        
        if(b&1){
            count++;
            
            b=b>>1;
        }
        
    }
    return count;
}

int main(){
    
    int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    
    int b;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    
    int sum=SetBitA(a)+SetBitB(b);
    
    cout<<"the required sum is "<<sum;
    
    return 0;
}