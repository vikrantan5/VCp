


#include<iostream>
#include<stack>


using namespace std;


void display(stack<int>&st){
    if(st.empty()){
        
        return;
    }

    int temp = st.top();
    st.pop();
    display(st);

    st.push(temp);
    cout<<st.top()<<endl;


}



void revStack(stack<int>&st ,int elem){
    if(st.empty()){
        st.push(elem);
        return;
    }

    int temp = st.top();
    st.pop();
    revStack(st , elem);

    st.push(temp);


}


int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    int elem = 80;
    revStack(st , elem);
    display(st);
}