#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


int main(){
   unordered_map<int , int>mp;
   vector<int>result;


   int n;
   cin>>n;

   vector<int>arr;

   for(int i = 0 ; i<n ; i++){
    int temp ;
    cin>>temp;
    arr.push_back(temp);
   }

   for(int i = 0 ; i<arr.size() ; i++){
    if(mp.find(arr[i]) ==mp.end()){
        result.push_back(arr[i]);
        mp[arr[i]]++;
    }
    else{
        mp[arr[i]]++;
    }
   }

   for(int i = 0 ;i<result.size() ; i++){
    if(mp[result[i]]==1){
        cout<<result[i];
        break;
    }
   }

   return 0;
}