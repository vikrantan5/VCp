#include<iostream>


int gcd(int a , int b){
    if(b==0){
        return a;
    }
    if(a==0){
        return b;
    }

    if(a>b){
       return gcd(a-b , b);
    }
    else{
       return gcd(a , b-a);
    }
}


using namespace std;
int main(){
    int num1;
    cin>>num1;

    int num2;
    cin>>num2;

   int result = gcd(num1 ,num2);
   cout<<result;
}