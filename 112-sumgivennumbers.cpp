#include<iostream>

using namespace std;


int sums(int m , int n){
    if(m==n){
        return n;
    }

    return m+sums(m+1 , n);
}


int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;

    int result =  sums(m , n);
    cout<<result;
}