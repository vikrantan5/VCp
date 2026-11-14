#include<iostream>

using namespace std;




class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }


};


class Stack{
    public:

    Node*head = NULL;
    int size = 0;



    void push(int val){
        Node* n = new Node(val);
        n->next = head;
        head = n;
        size++;

    }
    void pop(){
            if (head == NULL) return;

    Node* temp = head;
    head = head->next;
    delete temp;
    size--;
    }
    int top(){
        return head->val;
    }
    int sizeL(){
        return size;
    }
};

int main(){




}