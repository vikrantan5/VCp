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

class Queue{

    public:
    Node* front;
    Node* rear;
   

    Queue(){
        front=NULL;
        rear = NULL;

    }
    void push(int x){
        if(front ==NULL && rear==NULL){
            Node* temp = new Node(x);
            front = temp;
            rear =temp;
            return;
        }
        Node* temp = new Node(x);
        rear->next = temp;
        rear = rear->next;
    }
    void pop(){
        if(front==NULL && rear==NULL){
            cout<<"Underflow"<<" ";
            return ;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }
    void display(){
        if(front ==NULL && rear==NULL){
            cout<<"NO element";
            return ;
        }
        Node* temp = front;

        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }


    
};


int main(){

    Queue* que =new Queue();

    que->push(5);
    que->push(8);
    que->push(3);
    que->push(2);
    que->push(7);
    que->push(4);
    que->push(6);
    que->push(3);
    que->pop();
    que->display();
}