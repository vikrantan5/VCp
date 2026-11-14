#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string s ="phyecswallah";
    string t ="pshycsillawha";


    sort(s.begin() , s.end());
    sort(t.begin() , t.end());

    if(s==t){
        cout<<"anagram";
    }
    else{
        cout<<"not a anagram";
    }


}