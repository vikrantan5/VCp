#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Stacks{
    public:
    int top;
   int *st;
    int size ;
    Stacks(int n){
        size = n;
        top = -1;
        st = new int[size];
    }
    void push(int x){
        if(top==-1){
            top = 0;
            st[top] = x;
        }
        else if(top == size-1){
            cout<<"Overflow";
            return;
        }
        else{
            top++;
            st[top] = x;
        }
    }

    int  pop(){
        int temp;
        if(top ==-1){
            cout<<"Underflow";
        }
        else{
            temp = st[top];
            top--;
        }
        return temp;
    }
    bool isEmpty(){
        return top==-1;
    }
    int stsize(){
        return top+1;
    }

    int eval(string s){
        for(char x : s){
          
            if(x=='+' || x=='-' || x=='/' || x=='*'){
                int a = pop();
                int b = pop();
                  int res;
                if(x=='+'){
                    res = b+a;
                    push(res);
                }
                else if(x=='-'){
                    res = b-a;
                    push(res);
                }
                else if(x=='*'){
                    res = b*a;
                    push(res);
            }
                else if(x=='/'){
                    res = b/a;
                    push(res);
                }
            }
            else{
                push(x-'0');
            }
        }
        
        
       return pop();
    }
};


int main(){

    string s;
    cin>>s;

    Stacks* stx = new Stacks(s.size()-1);

    int result= stx->eval(s);
    cout<<result;

    return 0;

}