#include<iostream>

using namespace std;

class Stack{
    public:
    int arr[20];
    int idx ;
    Stack(){
        idx = -1;
    }
    void push(int val){
        if(idx==20){
            cout<<"stack is full";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty"<<endl;
            return ;
        }
        idx--;
    }
    int top(){
       if(idx==-1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[idx];

    }
    int size(){
        return idx+1;
    }
};


int main(){
    Stack st;

    st.push(5);
    st.push(6);
    st.push(8);
    st.push(4);
    st.push(2);
    st.push(1);
    st.push(9);
    st.push(3);
    st.push(4);
    cout<<st.size();


}