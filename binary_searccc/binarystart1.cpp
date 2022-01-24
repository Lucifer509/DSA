// Goal is to find at which index element is preset?
// time complexity of binary search is O(log n); space is O(1);
// only done after sorting the array

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int key){

    if( high >= low){

        int mid = low+(high -low)/2;

        if (arr[mid]==key)
            return mid;

        if(arr[mid]>key)
            return binarySearch(arr,low,mid-1,key);

        return binarySearch(arr,mid+1,high,key);
    }
    return -1;
}


int main(){
    int arr[] = {1,2,5,10,20,40,51,99,100};   // given sorted array.
    int x = 55;  // value whose index has to be find orr key.
    int n = sizeof(arr)/sizeof(arr[0]); // sizeof give size in bytes.
    int result = binarySearch(arr,0,n-1,x);
    if(result == -1){
        cout<< "Element is not present in arr";
    }
    else
        cout<<"Element present at index of "<<result;
    return 0;
}