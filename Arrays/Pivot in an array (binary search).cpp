#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    
    while(s<e){
        
   
         if(arr[mid]>=arr[0]){
                s=mid+1;
         }    
                else {
                    e=mid;
                }
        
        mid=s+(e-s)/2;
    }//here you ca return either s, e or mid{because they all are equal;)
    return mid;
}
int main(){
    
    int arr[5]={3,8,1,10,17};
    
    cout<<"Pivot Index is " <<getPivot(arr,5);
    
    
    return 0;
    
}