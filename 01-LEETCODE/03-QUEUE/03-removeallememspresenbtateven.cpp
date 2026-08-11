#include<iostream>
#include<queue>
#include<stack>
using namespace std;


void display(queue<int>&q){

    int n = q.size();

    for(int i = 0 ; i<n ; i++){
        cout<<q.front()<<" ";
        int temp =q.front();
        q.pop();
        q.push(temp);


    }
}  


void reverse(queue<int>&q){
    stack<int>st;
    int n = q.size();

    for(int i = 0 ; i<n ; i++){
        st.push(q.front());
        q.pop();
    }
    while (st.size()>0)
    {
        /* code */
        q.push(st.top());
        st.pop();

    }
    


}

void removefromeven(queue<int>&q){
    int n = q.size();
    int i = 0;
    while (i<n)
    {
        /* code */
        if(i%2!=0){
            q.push(q.front());
        }
        q.pop();
        i++;
    }
    
}

int main(){
    queue<int>q;

    q.push(50);
    q.push(15);
    q.push(45);
    q.push(65);
    q.push(85);
    q.push(75);
    q.push(25);
    q.push(35);
    q.push(15);

    

    display(q);

    removefromeven(q);
    cout<<endl;
        display(q);

}