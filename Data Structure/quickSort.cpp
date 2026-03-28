#include<iostream>
using namespace std;
 
int partition(int arr[], int lower, int upper){

   int pivot = lower;
   int left = lower+1;
   int right = upper;

   while(left<= right){
    while(left<=right && arr[left]<= arr[pivot]){
        left++;
    }
    while(right>= left && arr[right]>arr[pivot]){
        right--;
    }
    if(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
   }
   int temp = arr[pivot];
   arr[pivot] = arr[right];
   arr[right] = temp;

   return right;
  
}

void quick(int arr[] , int lower , int upper){
    if(lower<upper){
        int pivot = partition(arr, lower , upper);

        quick(arr , lower , pivot-1);
        quick(arr , pivot+1 , upper);
    }
}



int main(){
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/ sizeof(arr[0]);
 
    quick(arr, 0, n - 1);
 
    cout<<"Sorted  array :";
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}

