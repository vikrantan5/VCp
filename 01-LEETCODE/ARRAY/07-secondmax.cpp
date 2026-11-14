#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {5,9,7,9,2,47,3,1,5,63,4,58,8,59,96};

    int maxi = INT_MIN;
    int secmax =INT_MIN;

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<n ; i++){

        if(arr[i]>maxi){
            maxi = arr[i];
        }

        if(maxi>arr[i] && arr[i]>secmax){
            secmax =arr[i];
        }
    }

    cout<<"second maxi is "<<secmax<<endl;



}