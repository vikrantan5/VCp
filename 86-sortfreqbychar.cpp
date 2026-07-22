// IHNPUT---tree;
// output -- eert



#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;


typedef  pair<char , int> P;
int main(){

    string s;
    cin>>s;

    vector<P>vec(123);

    for(char ch : s){
        int freq = vec[ch].second;
        vec[ch]= {ch ,freq+1};

    }


    // e-1  , r-1 , t-2

    auto lambda = [&](P &p1 ,P &p2){
        return p1.second>p2.second;
    };
    sort(vec.begin() , vec.end() , lambda);


    string result= "";
    for(auto ch : vec){
        if(ch.second >0){
            char c = ch.first;
            int num = ch.second;
            result+= string(num , c);
        }
    }

    cout<<result;
}