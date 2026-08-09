#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    // cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    // cout<<st.top()<<endl;
    // cout<<st.size()<<endl;
    st.pop();
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(20);
    st.push(30);
    st.push(10);
    st.push(140);
    // cout<<st.top();
    // cout<<endl;

    stack<int>st2;

    while(st.size()>0){
        // cout<<st.top()<<" ";
        st2.push(st.top());
        st.pop();
        
    }
    while(st2.size()>0){
        int n = st2.top();
        cout<<n<<" ";
        st2.pop();
        st.push(n);
    }
}