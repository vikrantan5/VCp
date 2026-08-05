#include<iostream>

using namespace std;



bool palindrome(string s ,int idx){

    if(idx>=s.size()/2){
        return true;
    }
    if(s[idx] != s[s.size()-1-idx]){
        return false;
    }
   
    return palindrome(s , idx+1);
}

int main(){
    string s = "raceccar";
    
   bool temp = palindrome(s ,0 );
   cout<<temp;
}