#include<iostream>

#include<stack>

using namespace std;


int main(){

    int arr[] ={3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    stack<int>st;

    st.push(arr[0]);
    arr[0] = -1;

    for(int i = 1 ; i< n  ; i++){
        while(!st.empty() && st.top() < arr[i]){
            st.pop();
        }
        if(!st.empty()){
            int temp =st.top();
            st.push(arr[i]);
            arr[i] = temp;
        }
        else{
            st.push(arr[i]);
            arr[i] =-1;
        }
    }

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}