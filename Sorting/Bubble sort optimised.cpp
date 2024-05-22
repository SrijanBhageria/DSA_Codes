#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1; i<n; i++){
        //for rround n to n-1
        bool swapped =false;
            for(int j=0; j<n-i; j++) {

                //process element till n-ith index
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped= true;
                }
            }
            if (swapped == false) {
                //already sorted
                break;
            }
    }
}
