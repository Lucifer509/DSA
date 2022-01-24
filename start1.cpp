// Time complexity : O(n^2).
// best case : O(n);
// worst case : O(n*n);
// in insertionSort we take a key and then compare it with elemnt before key position and insert it at desire place
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    int i,j,key;
    for(i =1;i<n;i++){
        key = arr[i];
        j= i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

printArray(int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}

int main()
{
    int arr[] = {9,6,7,8,2,3,5,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}