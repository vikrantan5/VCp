#include<iostream>
#include<queue>

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

}