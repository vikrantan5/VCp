#include<iostream>

using namespace std;

void traverse(int arr[], int i){
    if(i==9){
        return;
    }
    cout<<arr[i];
    traverse(arr, i+1);
}


int main(){
    int arr[] ={1,5,5,6,9,4,5,6,4};

    int i = 0;
    traverse(arr , i);
}