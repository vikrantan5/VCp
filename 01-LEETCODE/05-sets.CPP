#include<iostream>
#include<unordered_set>


using namespace std;

int main(){
    unordered_set<int>s;


    s.insert(5);
    s.insert(2);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    s.insert(5);


    for(auto ele : s){
        cout<<ele<<" ";
    }
}