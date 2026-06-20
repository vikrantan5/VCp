#include<iostream>

using namespace std;



int primeNum(int n){
    for(int i =2 ; i*i<n ;i++){
        if(n%i==0){
            return 0;
        }

    }
    return 1;
}


int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int result= primeNum(n);

    if(result==1){
        cout<<"prime";
    }
    else{
        cout<<"not primt";
    }
    
}