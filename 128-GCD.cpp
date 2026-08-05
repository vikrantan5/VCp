#include<iostream>

using namespace std;


int gcd(int n , int m){
    if(n==0){
        return m;
    }
    else if(m==0){
        return n;
    }
    else if(n>m){
        return gcd(n-m , m);
    }
    else{
       return  gcd(n , m-n);
    }
}

int main(){
    int num1= 24;
    int num2 = 60;
    int result = gcd(num1 , num2);
    cout<<result;
}