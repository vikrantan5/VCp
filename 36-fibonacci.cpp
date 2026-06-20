#include<iostream>

using namespace std;

void fib(int n ){
    int first = 0;  
    int sec =1;
    cout<<first<<" ";
    cout<<sec<<" ";
    while(n){
        cout<<first+sec<<" ";
        int temp = first+sec;
        first = sec;
        sec = temp;
        n--;
    }
}


int main(){
    int n;
    cin>>n;

    fib(n );

    return 0;
}