#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int n){
        data = n;
        next = NULL;
    }
};

class Stack{
    public:
    Node* head;
    Stack(){
        head=NULL;
    }
    void push(int x){
        if(head==NULL){
            Node* tempNode = new Node(x);
            head = tempNode;
        }
        else{
            Node* tempNode = new Node(x);
            tempNode->next = head;
            head = tempNode;
        }
    }
    void pop(){
        if(head==NULL){
            cout<<"UNDERFLOW";
            return;
        }
        Node* temp = head;
        head = temp->next;
        delete temp;
    }
    void display(){
        Node* temp;
        temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    Stack* st = new Stack();
    st->push(3);
    st->push(7);
    st->push(4);
    st->push(6);
    st->push(9);
    st->push(5);
    st->push(2);
    st->display();



}