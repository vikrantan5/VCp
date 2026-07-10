#include<iostream>
#include<vector>
using namespace std;


int main(){
    int N;
    cin>>N;
    vector<int>nums;
    while(N>0){
        int digit = N%10;
        nums.push_back(digit);
        N/=10;
    }
    for(int i = nums.size()-1 ; i>=0 ; i--){
        cout<<nums[i]<<" ";
    }
}