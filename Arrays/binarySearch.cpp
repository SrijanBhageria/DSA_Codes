#include<iostream>
#include<math.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
    
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    
    while(start<=end){
        
        if(arr[mid]==key){
            return mid;
        }
        
        if(arr[mid]<key){
            //move to the right 
            start=mid+1;
        }
        
        if(arr[mid]>key){
            //move to the left 
            end=mid-1;
        }
        mid=start+(end-start)/2;//so that mid does not exceed the max value of int
    }
    return -1;
}

int main(){
    
    
    int even[6]={2,4,6,8,12,14};
    int odd[5]= {1,3,5,7,9};
    
    int indexEven=binarySearch(even,6,16);
    int indexOdd=binarySearch(odd,5,10);
    
    cout<<"Index of 16 is "<<indexEven<<endl;
    cout<<"Index of 10 is "<<indexOdd<<endl;

return 0;
}