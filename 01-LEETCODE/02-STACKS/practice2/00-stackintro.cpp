#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int>st;

    st.push(56);
    st.push(45);
    st.push(66);
    st.push(57);
    
    cout<<st.top();
    cout<<st.size();


    
}


// O(1) for push pop size  top

// traversing the stack