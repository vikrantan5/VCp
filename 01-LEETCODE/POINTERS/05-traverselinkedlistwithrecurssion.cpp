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



void traverseLL(Node* head){
    if(head==NULL){
        return;
    }
    traverseLL(head->next);
    cout<<head->val<<endl;
    
}

int main(){


    Node* a = new Node(56);
    Node* b = new Node(76);
    Node* c = new Node(89);
    Node* d = new Node(34);
    Node* e = new Node(23);
    Node* f = new Node(53);


    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;


    Node* head = a;
    traverseLL(head);

}