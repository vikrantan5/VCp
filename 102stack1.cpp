#include<iostream>

using namespace std;

class Stack{

    public:
    int top;
    int data;
    int *arr;
    int size;

    Stack(int n){
        top = -1;
        arr=new int[n];
        size = n;
    }

    void push(int x){
        if(top==size-1){
            cout<<"Overflow";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top==-1){
            cout<<"Underfolow";
            return ;
        }
        top--;

    }

    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }

    void displayTop(){
        cout<<arr[top];
    }
};



int main(){


    Stack* st = new Stack(6);
    st->push(5);
    st->push(3);
    st->push(2);
    st->push(7);
    st->push(6);
    st->pop();
    st->displayTop();



}