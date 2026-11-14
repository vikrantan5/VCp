#include<iostream>

using namespace std;


int main(){

    string s = "raghggggav";

    int arr[26] ={};
    
    for(int i = 0 ; i<s.size() ; i++){
        arr[s[i]-'a']++;
    }
    int idx = 0;
    int max=0;

    for(int i = 0 ; i<26 ; i++){
        if(arr[i] >max){
            max = arr[i];
            idx = i;
        }
    }
    char ans = idx+'a';

    cout<<ans;
}