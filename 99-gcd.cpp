#include<iostream>

using namespace std;



int gcd(int a , int b){
    if(a==0){
        return b;

    }
    if(b==0){
        return a;
    }
    if(a>b){
       
       return gcd(a-b , b);
    }
    else{
        return gcd(a , b-a);
    }

}
int main(){

    int first;
    cin>>first;
    int second;
    cin>>second;

    int result=gcd(first , second);

    cout<<result;
}