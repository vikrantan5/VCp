#include<iostream>

using namespace std;


void power(int s , int b , int mul ,int n){
    if(n==b){
        cout<<mul;
        return;
    }
    mul*=s;
    power(s , b , mul ,n+1 );
}

int main(){
    int a;
    cin>>a;
    int b ;
    b = 4;
    int mul = 1;

    power(a ,b , mul , 0);
}