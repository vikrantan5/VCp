#include<iostream>

using namespace std;

class Node{  
    public:   //user defined datatype
    int val;
    Node* next;

    Node(int val){
        this->val =val;
        this->next = NULL; 
    }
};


class LinkedList{ //user defined data sturcture
    public:
    Node* head ;
    Node* tail ;
    int size ;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) {
            head = tail = temp;
        }
        else{
            tail->next =temp;
            tail =temp;
        }
        size++;
        
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIdx(int idx , int val){
       if(idx<0 || idx>size){
        cout<<"INVALID index"<<endl;
       }
        else if(size==0){
           insertAtHead(val);
        }
        else if(idx==size){
            insertAtEnd(val);
        }
        else{
            Node *t = new Node(val);
            Node* temp = head;
            for(int i = 1 ;i<=idx-1 ;i++){
                temp =temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;

        }

    }

    int getAtIndex(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1)return tail->val;
        else{
            Node* temp = head;
            for(int i = 1 ; i<=idx ; i++){
                temp = temp->next;
            }
            return temp->val;
        }

    }

    void deleteAtHead(){
        if(size==0){
            cout<<"LL is empty";
           return;
        }
        else if(size==1){
            head = tail = NULL;
            return;
        }
        head =head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"EMPTY";
        }
        Node* temp =head;
        while(temp->next != tail){
            temp =temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;

    }

    void deteleAtIndex(int idx){
        if(size==0){
            cout<<"list is empty";
            return;
        }
       else  if(idx<0 || idx>=size){
            cout<<"INVALID INDEX";
            return;

        }
        else if(idx==0){
            return deleteAtHead();
        }
        else if(idx==size-1){
            return deleteAtTail();
        }
        else{
            Node* temp= head;
            for(int i = 1;  i<=idx-1 ; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }

    }

    void display(){
        Node* temp=head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }


};

int main(){

    LinkedList ll;
    ll.insertAtEnd(10); 
    ll.insertAtEnd(20); 
    ll.display();
    cout<<endl;
    ll.insertAtEnd(20); 
    ll.insertAtEnd(50); 
    ll.insertAtEnd(60); 
    ll.insertAtEnd(20); 
    ll.insertAtEnd(90); 
    ll.display();
    cout<<endl;
   cout<< ll.size;

   cout<<endl;

   ll.insertAtHead(6);
   ll.insertAtHead(5);
   ll.insertAtHead(3);
   ll.insertAtHead(676);
   ll.insertAtHead(5);

   ll.display();
   cout<<endl;
   cout<<ll.size;

   ll.insertAtIdx(5,175);
   ll.display();
   
    cout<<endl;
   cout<<ll.getAtIndex(6);
   cout<<endl;
   ll.deleteAtHead();
   ll.display();
   cout<<endl;
   ll.deleteAtTail();
   ll.display();
   cout<<endl;
   ll.deteleAtIndex(5);
   ll.display();
}