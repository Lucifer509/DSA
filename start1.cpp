// Time complexity : O(n^2).
// best case : O(n);
// worst case : O(n*n);
// in selectionSort we find min value than pace is at start of the array
#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int arr[],int size)
{   
    int i,j,min;
    for(i=0;i<size-1;i++){
        min = i;
        for(j=i+1;j<size;j++)
            if(arr[j]<arr[min])
                min = j;
        
        swap(&arr[min],&arr[i]);
    }
    
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,4,1,9,8,6,7,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}