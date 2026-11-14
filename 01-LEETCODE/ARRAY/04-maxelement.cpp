#include<iostream>
#include<climits>
using namespace std;

int main(){


    int arr[] = {1,5,7,654,5,5,56,4,65,4,5,5,5};


    int maxi = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<n ; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }

    cout<<"the max elemenmbt is ";
    cout<<maxi;
}