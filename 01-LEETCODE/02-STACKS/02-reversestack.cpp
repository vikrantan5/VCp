#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>st1;
    stack<int>st2;
    stack<int>st3;

    st1.push(5);
    st1.push(8);
    st1.push(6);
    st1.push(17);
    st1.push(11);
    st1.push(3);
    st1.push(45);
    st1.push(54);
    st1.push(51);

    while(st1.size()>0){
        st2.push(st1.top());
        st1.pop();
    }
    while(st2.size()>0){
        int n = st2.top();
        cout<<n<<" ";
        st3.push(st2.top());
        st2.pop();
    }
    while(st3.size()>0){
        st1.push(st3.top());
        st3.pop();
    }


}