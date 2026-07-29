#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<char , int>mp;


    for(int i = 0 ; i<s.size() ; i++){
        if(mp.find(s[i]) ==mp.end()){
            mp[s[i]] = i+1;
        }
       
        int temp= mp[s[i]];
        while(temp){
            cout<<s[i];
            temp--;
        }
        if(i != s.size()-1){
            cout<<"-";
        }
        
    }
}