#include<iostream>
using namespace std;

void  merge(int arr[], int lower , int  mid , int upper){
    int i = lower ;
    int j = mid+1;
    int k = 0;

    int size = upper - lower +1;
    int newArr[size];


   while(i<= mid && j<= upper){
    if(arr[i] < arr[j]){
        newArr[k] = arr[i];
        k++;
        i++;
    }
    else{
        newArr[k] = arr[j];
        k++;
        j++;
    }
   }

   while(j<= upper){
    newArr[k]= arr[j];
    k++;
    j++;
   }
   while(i<= mid){
    newArr[k] = arr[i];
    k++;
    i++;
   }
   for(int i = 0; j = lower ; i< size , i++, j++)
     arr[j] = newArr[i];

}

void mergeSort(int arr[], int lower , int upper){
    if(lower<upper){
        int mid = (lower + upper)/2;
        mergeSort(arr , lower , mid);
        mergeSort(arr, mid+1, upper);
        merge(arr, lower , mid , upper);
    }
}
int main(){
    int arr[] = { 5,1,4,2,8};
    int n = sizeof(arr)/ sizeof(arr[0]);

    mergeSort(arr,0 , n-1);

    cout<<"Sorted array :";
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}

