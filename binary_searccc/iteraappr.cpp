#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low , int high , int key){
    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid]== key)
            return mid;
        
        if(arr[mid] < key)
            low = mid+1;
        
        high = mid -1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,5,10,20,40,80,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 1000;
    int result = binarySearch(arr,0,n,x);

    (result == -1)
        ? cout<<"Element is not present in array"
        : cout<<"Element is present at index "<< result;
    return 0;
}