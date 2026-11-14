#include<iostream>

using namespace std;

int main(){

    int arr[] = {1,5,7,6,6,47};

    int sum = 0;

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ;i++){
        sum+=arr[i];
    }

    cout<<"the sum is"<<endl;
    cout<<sum<<endl;
}