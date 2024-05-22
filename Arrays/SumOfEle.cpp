#include<iostream>
#include<math.h>
using namespace std;

int sumOfele (int arr[], int size){
    
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    
    int arr[100];
    int size;
    cout<<"Enter the size of the array "<<endl;
    cin>>size;
    
    cout<<"Enter the elements of the array "<<endl;
    
    //asking the elements of the array
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    int sum=sumOfele(arr,size);
    cout<<"the required sum is "<<sum<<endl;
    return 0;
    
}