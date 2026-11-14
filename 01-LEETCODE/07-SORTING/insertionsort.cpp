#include<iostream>

using namespace std;

int main(){
    int arr[] ={5,3,1,4,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i= 1;
    while(i<n-1){
        while(arr[i] < arr[i-1] && (i-1 !=-1)){
            swap(arr[i] ,arr[i-1]);
        }
        i++;


    }

    for(int i = 0  ; i<n ; i++){
        cout<<arr[i]<<" ";
    }


}