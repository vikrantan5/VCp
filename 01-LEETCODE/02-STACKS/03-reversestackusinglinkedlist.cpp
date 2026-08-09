#include<iostream>
#include<stack>
using namespace std;


class Node{
    public:

    int val;
    Node* next;

    Node(int val){
        this->val =val;
        this->next = NULL;
    }
};

void display(stack<int>st){
    stack<int>st2;
    while(st.size()>0){
        cout<<st.top()<<" ";
        st2.push(st.top());
        st.pop();
    }
    while (st2.size()>0)
    {
        /* code */
        st.push(st2.top());
        st2.pop();
    }
    
}

int main(){
    stack<int>st;
    st.push(42);
    st.push(62);
    st.push(82);
    st.push(2);
    st.push(4);
    st.push(92);
    st.push(32);

    Node* dummy = new Node(0);
    Node* temp = dummy;

    while(st.size()>0){
        int n = st.top();
        Node* curr = new Node(n);
        temp->next =curr;
        temp = temp->next;
        st.pop();
    }
    Node* curr = dummy->next;
    while(curr){
        st.push(curr->val);
        curr = curr->next;
    }

    display(st);
}