#include<iostream>

using namespace std;

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next =NULL;
    }
};

class Stack{
    public:
        int size ;
       Node* head; 
    Stack(){
        size = 0;
        head = NULL;
    }
    void push(int value){
        Node* temp = new Node(value);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
        }
        head = head->next;
        size--;
    }
    int sizes(){
        if(head==NULL){
            return -1;
        }
        return size;
    }

    void display(){
        Node* temp;
        temp =head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    Stack st;
    st.push(6);
    st.push(4);
    st.push(1);
    st.push(3);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(4);
    st.push(5);
    st.push(2);
    st.push(2);

    st.display();
    cout<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.display();
    cout<<endl;
    cout<<st.sizes();

}