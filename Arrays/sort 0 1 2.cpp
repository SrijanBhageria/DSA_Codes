#include<iostream>
#include<math.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

void sortOnetwo(int arr[], int n){
    
   int left=0;
   int right= n-1;
   int i;
   
   while(i<right){
       
       if(arr[i]==0){
       swap(arr[i],arr[left]);
           left++;
           i++;
   }    
       
       
       else if(arr[i]==2){
           swap(arr[i], arr[right]);
           right--;
       }
       
       else {
           i++;
       }
       
       
      
       
   }
}       
        
        
    
int main(){
    
    int arr[6]= {0,1,2,2,1,0};
    
    sortOnetwo(arr,6);
    printArray(arr,6);
    
    return 0;
}