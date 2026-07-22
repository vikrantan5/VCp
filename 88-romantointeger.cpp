#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char , int>mp;
    mp['I'] =1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;


    string roman;
    cin>>roman;

    int result = 0;
    for(int i = 0 ; i<roman.size()-1  ; i++){

        if(mp[roman[i]]>= mp[roman[i+1]]){
            result+=mp[roman[i]];
        }
        else{
            result-=mp[roman[i]];
        }
    }


    result += mp[roman.back()];
    cout<<result;

}