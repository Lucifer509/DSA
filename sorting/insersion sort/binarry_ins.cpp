// not doooing now wating for the higher understanding?????
#include<iostream.h>
using namespace std;

int binarySearch(int arr[],int low, int h, int key)
{   
    if(h<=low){         // base condition;
        return (arr[low]>key)
                ?(low+1) : low;
    }
    int mid = low +(h-low)/2;

    if(arr[mid] == key)
    {
        return mid +1;
    }


}

int main()
{
    int arr[] = {99,44,66,9,33,4,88,46,51,29};
    int n = sizeof(arr)/sizeof(arr[0]);

    b_insertionSort(arr,n);
    printArray(arr,n);
    return 0;

}