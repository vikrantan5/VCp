#include<iostream>

using namespace std;




void fibo(int n, int i , int j){
    if(i > n){
        return;
    }

    cout<<i<<" ";

    fibo(n , j , i+j);
}
int main(){
    int n;
    cin>>n;

    fibo(n,0 , 1);
}