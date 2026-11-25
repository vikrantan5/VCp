#include<iostream>
#include<stack>
using namespace std;

int main(){


    stack<int>st;

    st.push(56);
    st.push(67);
    st.push(334);
    st.push(55);
    st.push(89);
    st.push(54);
    st.push(3);

    stack<int>st2;

    while(!st.empty()){
        cout<<st.top()<<endl;
        int temp  =st.top();
        st.pop();
        st2.push(temp);
    }

}