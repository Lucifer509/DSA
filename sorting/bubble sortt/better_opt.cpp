// Time complexity : O(n^2).
// best case : O(n);
// worst case : O(n*n);

#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[],int n){
    bool swapped; // we make a bool
    for(int i=0;i<n-1;i++){

        swapped = false; // every time change i bool is false;
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;   // is there a time in which arr sorted than it if not enter the loop
            }
        if(swapped == false){    // when inner loop does not swap then break
            break;
        }

    }
        
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