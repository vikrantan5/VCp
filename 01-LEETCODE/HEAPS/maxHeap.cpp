#include<iostream>
#include<queue>

// cpp me by default max heap 
//java me bydefault minheap


//if we want  a ds in which we can always get the max or min element at any point of time thne we use priority queue

// element top mpe h uski TC = O(1)
// push(x)--->O(log(n))
// pop()----->O(logn)


// two types of heap--->max heap

// min heap
// priority_queue<int , vector<int> , greater<int>>pq


// how to identify 

// kth smllest element
// top ke frequent elements
//at any time minimum or max elemenrts


using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(82);
    pq.push(52);
    pq.push(62);
    pq.push(92);
    pq.push(12);

    cout<<pq.top();

    
}