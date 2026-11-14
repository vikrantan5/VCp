#include<iostream>
#include<limits>
using namespace std;

int main(){
    int arr[] ={5,3,1,4,2};
    int n =sizeof(arr)/sizeof(arr[0]);


    for(int i = 0 ; i<n; i++){
        int mini = i;
        for(int j = i ; j<n ; j++){
            if(arr[mini] >arr[j]){
                mini = j;
            }
        }
        swap(arr[i] , arr[mini]);
    }


    for(int i = 0 ;i<n ; i++){
        cout<<arr[i]<<" ";
    }
}