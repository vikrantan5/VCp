#include<iostream>
#include<stack>
#include <algorithm>
using namespace std;

int main(){


    string s = "aaaabbbcddaabffg";

    stack<int>st;


    st.push(s[0]);
    for(int i = 1 ; i<s.size() ; i++){
        if(s[i]!=st.top()){
            st.push(s[i]);
        }


    }

    string result;


    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }

    reverse(result.begin() , result.end());

    cout<<result;




}