#include<iostream>
#include<queue>
#include<vector>


using namespace std;


int main(){

    int n , k;
    cin>>n>>k;

    priority_queue<int , vector<int> , greater<int>>minheap;

    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;

        if(minheap.size() <k){
            minheap.push(x);
        }
        else if(x>minheap.top()){
            minheap.pop();
            minheap.push(x);
        }
    }
}

