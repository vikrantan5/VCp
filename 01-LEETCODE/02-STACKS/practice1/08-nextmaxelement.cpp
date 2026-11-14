#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){


    int arr[] ={3,1,2,5,4,6,2,3};

    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int>st;

    st.push(arr[n-1]);


    arr[n-1] = -1;

    for(int i = n-2 ; i>=0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.size() !=0){
            int temp = st.top();
            st.push(arr[i]);
            arr[i] = temp;
        }
        else{
            st.push(arr[i]);
            arr[i] = -1;
        }
    }

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}