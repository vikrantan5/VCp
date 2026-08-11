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


    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next =&d;
    d.next = NULL;


    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next == NULL){
            break;
        }
        temp = *(temp.next);
    }

    





    // Node s(5);
    // cout<<s.val<<endl;
    // cout<<s.next;
    

}




    // Node* n1 = new Node();
    // Node n2(5);
    // // n2.val = 5;
    // Node* ptr2= &n2;


    // Node n1(91);
    // // n1.val = 91;
    // Node* ptr1 = &n1;
    // n1.next = ptr2;

    // cout<<(*ptr2).val<<endl;
    // cout<<ptr2->val;
    // cout<<(*n1.next).val;

    // Node n1(5);
    // Node n2(6);

    // n1.next = &n2;

    // // cout<<(*n1.next).val;

    // Node* ptr = new Node(10);
    // Node* ptr1 = new Node(20);

    // cout<<(*ptr).val;
    // ptr->next = ptr1;

    // (*ptr).next = ptr1;

    // cout<<(*ptr).next->val;
