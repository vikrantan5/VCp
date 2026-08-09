#include<iostream>
#include<stack>

using namespace std;


string removesup(string s){
    stack<char>st;
    for(int i = s.size()-1 ; i>=0  ;i--){
        if(st.size()==0){
            st.push(s[i]);
        }
        if(s[i]!=st.top()){
            st.push(s[i]);
        }
    }

    string temp = "";
    while(!st.empty()){
        temp.push_back(st.top());
        st.pop();
    }

}


int main(){
    string s ="ggggghhhhhrfffsssssffffhhhjk";
   cout<< removesup(s);
}