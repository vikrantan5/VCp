#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,5,9,8,10,12,13,15,19};
    vector<vector<int>>temp;
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n; i++){
        vector<int>curr;
        for(int j = i; j<n ; j++){
           
            curr.push_back(arr[j]);
            temp.push_back(curr);
        }
    }


    for(int i=  0 ; i<temp.size() ; i++){
        cout<<"{";
        for(int j = 0 ; j<temp[i].size() ; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}