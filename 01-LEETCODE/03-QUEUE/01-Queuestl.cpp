#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>&q){
 int n = q.size();

    for(int i  =0 ; i<n-1 ; i++){
        cout<<q.front()<<" ";
        int temp = q.front();
            q.pop();
            q.push(temp);
    }
}


int main(){


    queue<int>q;

    q.push(254);
    q.push(214);
    q.push(234);
    q.push(274);
    q.push(264);
    q.push(24);

    display(q);


   

}