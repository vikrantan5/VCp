#include<iostream>

using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
    }
};


int main(){

    Node* a = new Node(5);
    Node* b = new Node(58);
    Node* c = new Node(55);
    Node* d = new Node(53);

    a->next = b;
    b->next = c;
    c->next = d;
    

    cout<<a->val<<endl;
    cout<<a->next->val<<endl;
    cout<<a->next->next->val<<endl;
    cout<<a->next->next->next->val;
    // cout<<a->next->val;
    

}