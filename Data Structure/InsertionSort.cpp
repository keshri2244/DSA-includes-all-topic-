#include<iostream>
using namespace std;

void insertionSort(int arr[], int len){
    int j;

    for(int i= 0  ; i< len-1; i++){
        int curr = arr[i];
        int prev = i-1;

        while(j>=0 && curr<arr[prev]){
            arr[prev+1] = arr[prev];
            j--;
        }
    arr[prev + 1] = curr;
    }
}


int main(){
    int arr[] = {15, 11 ,7, 10, 9};
    int len = sizeof(arr)/ sizeof(arr[0]);

    insertionSort(arr, len);

    cout<<"Sorted array :";
    for(int i = 0; i<len ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}

