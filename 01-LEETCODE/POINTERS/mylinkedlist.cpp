#include<iostream>

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

class myLinkedList{
    private:
    Node* head ;
    Node* tail;
    int size;


    public:
    myLinkedList(){
        head= NULL;
        tail = NULL;
        size = 0;
    }

    void insertAthead(int value){
        if(head==NULL ||tail==NULL){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            size++;
        }
        else{
            Node* newNode = new Node(value);
            newNode->next = head;
            head = newNode;
            size++;
        }
    }
    void insertAtTail(int value){
        if(head==NULL||tail==NULL){
            Node* newNode = new Node(value);
            head = newNode;
            tail = newNode;
            size++;
        }
        else{
            Node* newNode = new Node(value);
            tail->next = newNode;
            tail = newNode;
            size++;
        }
    }

    void insertAtindex(int idx , int value){
        if(idx==0){
            insertAthead(value);
        }
        else if(idx = size-1){
            insertAtTail(value);
        }
        else{
            
        }
    }



}






int main(){

}