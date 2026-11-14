#include<iostream>
using namespace std;

int main(){


    int arr[] = {5,9,7,9,4,6,8,6};

    int n = sizeof(arr)/sizeof(arr[0]);
    int mul = 1;

    for(int i = 0 ; i<n ; i++){
        mul*=arr[i];
    }

    cout<<mul<<endl;
}