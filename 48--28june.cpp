#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<char>v(N);


    vector<int> order;
    unordered_map<char,int>mp;
    for(int i = 0 ; i<N ; i++){
        cin>>v[i];
    }


    for(auto x : v){
        if(mp[x]==0){
            order.push_back(x);

        }
        mp[x]++;
    }

    for(auto x : order){
        cout<<mp[x]<<" ";
    }


    return 0;



}