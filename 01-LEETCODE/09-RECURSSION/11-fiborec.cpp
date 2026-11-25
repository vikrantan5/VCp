#include<iostream>

using namespace std;


int fibo(int n ,int &i , int start , int nstart){
    if(i==n){
        cout<<nstart;

    }

    int newnum = start+nstart;

    start = nstart;
    nstart = newnum;
    i++;
    return fibo(n , i , start , nstart );
}

int main(){

    int n;
     cin>>n;

     int start = 0;
     int nstart = 1;

     if(n==0){
        cout<<start;
     }
     if(n==1){
        cout<<nstart;
     }

     int i = 1;

    int result  = fibo(n , i , start , nstart);
    cout<<result;
} 