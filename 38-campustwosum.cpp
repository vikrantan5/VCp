#include<iostream>

#include<vector>
#include<unordered_map>

using namespace std;

vector<int> teoSum(vector<int>coins , int target){
    unordered_map<int , int>mp;

    for(int i = 0 ; i<coins.size() ; i++){
        int remain = target-coins[i];
        if(mp.find(remain) != mp.end()){
            return {mp[remain] ,i};
        }
        mp[coins[i]] = i;
    }

    return {-1 , -1};
}


int main(){
    int n;
    cin>>n;
    vector<int>coins(n);

    for(int i = 0 ; i<n ; i++){
        cin>>coins[i];
    }

    int target;
    cin>>target;

    vector<int>result =teoSum(coins , target);

    cout<<result[0]<<" "<<result[1]<<endl;

    return 0;
}