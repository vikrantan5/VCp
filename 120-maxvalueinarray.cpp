#include<iostream>
#include<vector>
#include <climits>


using namespace std;


void maximum(vector<int>arr , int &maxi , int idx){
    if(idx==arr.size()){
        return ;
    }
    if(arr[idx]>maxi){
        maxi = arr[idx];
    }
    maximum(arr , maxi , idx+1);
}

int main(){
    vector<int>arr;

    arr ={4,5,6,7,9,8,14,56,23,28};
    int maxi =INT_MIN;
    maximum(arr , maxi , 0);
    cout<<maxi;
}