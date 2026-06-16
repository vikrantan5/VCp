// reverse and array usong recurssion

#include<iostream>

using namespace std;

void reverse(int arr[], int start , int end , int mid){
   if(start >= end){
    return;
}
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
    reverse(arr , start , end , mid);

}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        arr[i] = temp;
    }

    int mid = (0+(n-1))/2;
    reverse(arr , 0 , n-1 , mid);

    for(int i= 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}