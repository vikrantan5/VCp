#include<iostream>

using namespace std;

void permutation(string s , string r){

    if(r.size()==s.size()){
        cout<<r<<endl;
        return;
    }
    for(int i = 0 ; i<s.size();i++){
        r.push_back(s[i]);
        permutation(s.substr(1) , r);
        r.pop_back();
    }
}


int main(){
    string s;
    cin>>s;
    string result;
    permutation(s ,result );
}