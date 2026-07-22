#include<iostream>


using namespace std;



int countPalindrome(string s  , int left , int right){
   int  count  = 0;
    while(left>=0 && right <s.size() && s[left]==s[right]){
        count++;
        left--;
        right++;
    }

    return count;
}

int main(){
    string s;
    cin>>s;


    int count =0;

    for(int i = 0 ; i<s.size() ; i++){

        //odd palindromes
        count += countPalindrome(s , i , i); 

        //even palindromes
        count += countPalindrome(s , i , i+1);
    }


    cout<<count;

    return 0;
}