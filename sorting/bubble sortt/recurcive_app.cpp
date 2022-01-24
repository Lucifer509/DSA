#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[],int n){
    if(n==1){                            // base condition.
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){             // sorting done here.
            swap(&arr[i],&arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);        // recursion will happen here
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main(){
int arr[] = {2,7,4,9,3,5,8,1,6,44,13,99,77,55,62,41,71,13,24,91,88,66};
int n = sizeof(arr)/sizeof(arr[0]);

bubbleSort(arr,n);
printArray(arr,n);
return 0;
}