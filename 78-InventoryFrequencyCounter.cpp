#include<iostream>
#include<vector>
#include<sstream>
#include<unordered_map>
#include <cctype>


// #include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin , s);

    stringstream ss(s);
    vector<string>st;

    string temp;
    while(getline(ss ,temp , ' ' )){
        st.push_back(temp);
    }


    unordered_map<string , int > mp;

    vector<string>seq;

    for(int i = 0 ; i<st.size() ; i++){
        for(char ch : st[i]) {
            if(isdigit(ch)) {
                cout << "Invalid input";
                return 0;
            }
        }

        if(mp.find(st[i]) == mp.end()){
            seq.push_back(st[i]);
            mp[st[i]]++;
        }
        else{
            mp[st[i]]++;
        }

    }

    for(int i = 0  ; i<seq.size() ; i++){
        cout<<seq[i]<<" "<<mp[seq[i]]<<endl;
    }
}