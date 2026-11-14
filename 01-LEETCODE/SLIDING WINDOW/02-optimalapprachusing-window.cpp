#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    int j = 0;

    int k =3;

    int maxSum =INT_MIN;
    int currSum = 0;

    while(j<k){

        currSum+=arr[j];
        j++;
    }
    maxSum = currSum;

    while(j<n){
        currSum = currSum+arr[j]-arr[i];
         maxSum = max(maxSum ,currSum);
        i++;
        j++;
    }
   

    cout<<maxSum;


}