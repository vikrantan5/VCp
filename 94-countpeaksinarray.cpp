
#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin , s);


    stringstream ss(s);

    string temp;
    vector<int>arr;
    while(getline(ss , temp , ' ')){
        int nums = stoi(temp);
        arr.push_back(nums);
    }

    int count = 0;
    for(int i= 1 ; i<=arr.size()-2 ; i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            count++;
        }
    }

    cout<<count;
}