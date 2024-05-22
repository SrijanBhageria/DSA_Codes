#include<iostream>

using namespace std;
#include<math.h>

//need to specify no of col
bool isPresent(int arr[][3], int target, int row, int col){
    
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++){
            if(arr[row][col]==target){
                return 1;
            }
        }  
    }
    return 0;
}  

//to print row wise sum
void printSum(int arr[][3], int row, int col){
    cout<<"Printing sum "<<endl;
    
    for(int row=0; row<3; row++) {
        int sum=0;
        for(int col=0; col<3; col++){
           sum=sum+arr[row][col]; 
        }
        cout<< sum <<" ";
    }
    
    cout<<endl;
}

int largestRowSum(int arr[][3], int row, int col){
    
    int maxi= INT_MIN;
    int rowIndex=-1; 
    
    for(int row=0; row<3; row++) {
        int sum=0;
        for(int col=0; col<3; col++){
           sum=sum+arr[row][col]; 
        }
        
      if(sum>maxi){
          maxi=sum;
          rowIndex=row;
          
      }
    }
    
    cout<<"The maximum sum is "<<maxi<<endl;
    return rowIndex;
}
int main(){
    
    
    int arr[3][3];
    
    cout<<"Enter the elements "<<endl;
    //taking input  -->row wise input  
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    
    cout<<"Printing the array "<<endl;
    //print
    
     for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
     }
    
    
    /*
    cout<<"Enter the element to search "<<endl;
    int target;
    cin>>target;
    
    if(isPresent(arr, target, 3, 3)) {
        cout<<"Element found "<<endl;
    }
    
    else{
        cout<<"Not found ";
    }
    
    printSum(arr,3,3);
    */
    
    cout<<"Max row is at index "<<largestRowSum(arr,3,3)<<endl;

}