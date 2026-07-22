#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;

    vector<int>arr;
    for(int i= 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    vector<int> multipleten;
    vector<int>noten;

    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i] %10==0){
            multipleten.push_back(arr[i]);
        }
        else{
            noten.push_back(arr[i]);
        }


    }

    for(int i = 0 ; i<noten.size() ; i++){
        arr[i] = noten[i];
    }
    for(int i = noten.size() ; i< arr.size() ; i++){
        arr[i]= multipleten[i-noten.size()];
    }


    for(int i = 0  ; i<arr.size() ; i++){
        cout<<arr[i]<<" ";
    }

}