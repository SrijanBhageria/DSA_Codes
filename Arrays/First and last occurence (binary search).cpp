#include<iostream>
#include<math.h>
using namespace std;

int firstOccurence (int arr[], int size, int k){

        int s=0;
        int e= size-1;
        int mid=s+(e-s)/2;
        int ans=-1;

        while(s<=e){

            if(arr[mid]==k){
                ans=mid;
                e=mid-1;

            }

            else if(arr[mid]<k){//right me jao
                s=mid+1;

            }

            else if(arr[mid]>k){//left me jao
                e=mid-1;
            }

            mid=s+(e-s)/2;
        }
        return ans;
    }
    
    int lastOccurence (int arr[], int size, int k){

        int s=0;
        int e= size-1;
        int mid=s+(e-s)/2;
        int ans=-1;

        while(s<=e){

            if(arr[mid]==k){
                ans=mid;
                s=mid+1;

            }

            else if(arr[mid]<k){//right me jao
                s=mid+1;

            }

            else if(arr[mid]>k){//left me jao
                e=mid-1;
            }

            mid=s+(e-s)/2;
        }
        return ans;
    }
    
    int main() {

        int even[11] ={1,2,3,3,3,3,3,3,3,3,5};

        cout<<"First occurence of 3 is at index "<<firstOccurence(even,11, 3)<<endl;
        cout<<"Last occurence of 3 is at index "<<lastOccurence(even, 11, 3)<<endl;
        return 0;
    }