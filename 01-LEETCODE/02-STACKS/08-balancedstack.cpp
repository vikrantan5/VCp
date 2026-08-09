#include<iostream>
#include<stack>
using namespace std;


bool balanced(string s){
    stack<char>st;
    if(s.size()%2 !=0){
        return false;
    }
    for(int i = 0; i<s.size() ; i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')' && st.size()==0){
            return false;
        }
        else if(s[i]==')' && st.size()!=0){
            st.pop();
        }

    }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
}


int main(){
    
    string s =")((()))()(";
    cout<<balanced(s); 
}