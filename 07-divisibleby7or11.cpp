#include<iostream>

using namespace std;

int main(){
    int num ;
    cin>>num;

    if(num % 7==0 || num % 11==0){
        cout<<"perfect";
    }
    else{
        cout<<"not prfect";
    }

    return 0;
}