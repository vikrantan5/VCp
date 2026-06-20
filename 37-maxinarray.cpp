#include<iostream>
#include <limits.h>
using namespace std;

int main(){

    int arr[5] = {1,5,8,9,6};
    int maxi = INT_MIN;
    for(int i = 0 ; i<5 ; i++){
        maxi =max(maxi , arr[i]);
    }


    cout<<maxi;
}







































