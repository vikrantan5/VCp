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


int main(){

    Node* a = new Node(5);
    Node* b = new Node(55);
    Node* c = new Node(54);
    Node* d = new Node(53);
    Node* e = new Node(51);


    a->next = b;
    b->next =c;
    c->next = d;
    d->next =e;


    Node* head = a;
    Node* temp = NULL;

    temp = head;
    while(temp != NULL){
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}