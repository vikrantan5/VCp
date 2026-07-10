#include<iostream>

using namespace std;


class Queue{
    int *arr;
    int front , rear ;
    int size;
    public:
    Queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool IsEmpty(){
       return front==-1;
    }
    bool IsFull(){
        return rear = size-1;
    }

    void push(int data){
        if(IsEmpty()){
            front = rear = 0;
            arr[front]= data;
        }
        else if(IsFull()){
            cout<<"Queue is FUll";
        }
        else{
            rear++;
            arr[rear] =data;
        }
    }


    void pop(){
        if(IsEmpty()){
            cout<<"quue is empty";
        }
        else{
            if(front==rear){
                front =rear = -1;
            }
            else{
                front++;
            }
        }
    }

    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty";
            return -1;

        }
        return arr[front];
    }
};


int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.start()<<" " << endl;
    q.pop();
    cout << q.start()<<" " << endl;
    return 0;
}