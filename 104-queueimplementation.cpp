#include<iostream>

using namespace std;



class Queue{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    Queue(int n){
        front = -1;
        rear = -1;
        arr = new int[n];
        size = n;
    }

    void push(int x){
        if(front==-1 && rear == -1){
            front++;
            rear++ ;
            arr[rear] =x;
            return;

        }
        if(rear== size-1){
            cout<<"OVERFLOW"<<" ";
            return;
        }
        rear++;
        arr[rear] = x;

    }

    void pop(){
                if(front==-1){
            cout<<"NO ELEMENT IN THE QUEUE"<<" "<<endl;
            return;
        }
        if(front==rear){
            front=rear=-1;
            return;
        }

        front++;
    }

    void displayTop(){
        if(front==-1 && rear==-1){
            cout<<"Empty";
            return ;
        }
        cout<<arr[front];
    }

};


int main(){
    Queue* que = new Queue(6);
    que->push(5);
    que->push(8);
    que->push(3);
    que->push(2);
    que->push(4);
    que->pop();
    que->pop();
    que->pop();
    que->pop();
    que->pop();
    que->pop();
    que->displayTop();
}