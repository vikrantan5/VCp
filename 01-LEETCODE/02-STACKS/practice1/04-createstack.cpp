

#include<iostream>

#include<vector>


using namespace std;


class Stack{


    public:
    int idx ;
    vector<int>arr;

    Stack(){
        idx = -1;
    }

    void push(int val){
        idx++;
       arr.push_back(val);
    }
    void pop(){
        idx--;
    }

    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};

int main(){

    Stack st;

    st.push(40);
    st.push(70);
    st.push(80);
    st.push(50);
    int temp =st.top();
    cout<<temp<<endl;

    cout<<st.size();
}