#include<iostream>
#include<queue>


using namespace std;

int main(){
    // priority_queue<int>pq; //by default max heap

    // pq.push(400);
    // pq.push(401);
    // pq.push(408);
    // pq.push(462);
    // pq.push(406);
    // pq.push(450);
    // cout<<pq.top();




    priority_queue<int ,vector<int> ,greater<int> >pq; //by default max heap

    pq.push(400);
    pq.push(401);
    pq.push(208);
    pq.push(462);
    pq.push(406);
    pq.push(450);
    cout<<pq.top();
}