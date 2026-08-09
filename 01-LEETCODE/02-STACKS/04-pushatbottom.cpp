#include<iostream>
#include<stack>

using namespace std;
void display(stack<int>st1){
    stack<int>st2;
    while(st1.size()>0){
        // cout<<st1.top()<<" ";
        st2.push(st1.top());
        st1.pop();

    }
    while(st2.size()>0){
         cout<<st2.top()<<" ";
        st1.push(st2.top());
        st2.pop();
    }
}



void displayrec(stack<int>&st){
    if(st.size()==0){
        return;
    }
     cout<<st.top()<<" ";
    int n = st.top();
    st.pop();
    displayrec(st);
   st.push(n);
}

int main(){
    stack<int>st1;
    stack<int>st2;
  

    st1.push(5);
    st1.push(8);
    st1.push(6);
    st1.push(17);
    st1.push(11);
    st1.push(3);
    st1.push(45);
    st1.push(54);
    st1.push(51);

    // while(st1.size()>0){
    //     st2.push(st1.top());
    //     st1.pop();
    // }
    // st1.push(2022);


    // while(st2.size()>0){
    //     st1.push(st2.top());
    //     st2.pop();
    // }

    // display(st1);

    displayrec(st1);

}