#include<iostream>
#include<climits>
using namespace std;

int main(){


    int arr[] = {1,5,7,654,5,5,56,4,65,4,5,5,5};


    int mini = INT_MAX;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<n ; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }

    cout<<"the max elemenmbt is ";
    cout<<mini;
}