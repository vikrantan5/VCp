#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myLinkedList
{
    private:
     Node *head;
    Node *tail;
    int size;
public:
   

    myLinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void disPlay()
    {
        Node *temp;
        temp = head;

        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    void insertAtTail(int value)
    {
        if (head == NULL)
        {
            Node *tempNode = new Node(value);
            head = tempNode;
            tail = head;
            size++;
        }
        else
        {
            Node *tempNode = new Node(value);
            tail->next = tempNode;
            tail = tail->next;
            size++;
        }
    }
    void insertAthead(int value){
        if(head ==NULL){
            Node* tempNode = new Node(value);
            head = tempNode;
            tail = head;
            size++;
        }
        else{
            Node* tempNode = new Node(value);
            tempNode->next = head;
            head = tempNode;
            size++;
        }
    }
    void insertAtIndex(int idx , int value){
        if(idx==0){
            insertAthead(value);
        }
        else if(idx==size-1){
            insertAtTail(value);
        }
        else{
            Node* temp = head;
            while(idx){
                temp = temp->next;
            }
            Node* newNode = new Node(value);
            newNode->next =temp->next;
            temp->next = newNode;
            size++;
        }
    }

    int getIndex(int idx){
        if(idx<0 ||idx>size-1){
            cout<<"invalid index";
            return -1;
        }
        if(idx==0){
            return head->val;
        }
        else if(idx==size-1){
            return tail->val;
        }
        else{
           Node*  temp =head; 
            while(idx){
                temp = temp->next;
                idx--;
            }
            return temp->val;
        }
    }
    void deleteFromEnd(){
        if(head==NULL){
            cout<<"already empty";
        }
        else if(head->next==NULL){
            head=NULL;
            tail = NULL;
            size--;
        }
        else{
            Node* temp = head;
            while(temp->next !=NULL){
                temp->next = NULL;
                delete tail;
                tail = temp;
                tail->next = NULL;
                size--;

            }
        }

    }

    void removeIndex(int idx){
        if(idx<0 ||idx>size-1){
            return;
        }
    }
};

int main()
{

    myLinkedList mylist;

    mylist.insertAtTail(5);
    mylist.insertAtTail(6);
    mylist.insertAtTail(7);
    mylist.insertAtTail(8);
    mylist.disPlay();
}