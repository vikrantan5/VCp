#include<bits/stdc++.h>

using namespace std;

int main(){


    int k;
    cin>>k;
    int n;
    cin>>n;
        vector<int> arr;
    for(int i = 0 ; i<n ; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    

    for(int i = 0 ; i<arr.size() ; i++){
        if(arr[i]==k){
            cout<<i<<" ";
        }
    }

    return 0;

}