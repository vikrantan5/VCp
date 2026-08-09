#include<iostream>
#include<stack>
using namespace std;


int nexgreater(int arr[] , int n , int i){
    int temp = arr[i];
    stack<int>st;

    for(int j = i ;j<n ; j++){
        st.push(arr[j]);
        if(st.top() > temp){
            return st.top();
        }
    }
    return -1;

}

int main(){
     int arr[]= {5, 1, 4, 2, 3};
     
     int n=sizeof(arr)/sizeof(arr[0]);

     for(int i =  0  ; i<n ; i++){
        arr[i] = nexgreater(arr , n , i);
        
     }

     for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
     }
}