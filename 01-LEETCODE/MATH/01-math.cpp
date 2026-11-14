

//isprime


#include<iostream>
#include<math> 

using namespace std;




bool isPrime(int n){
    if(n==1) return false;

    for(int i= 2 ; i<=aqrt(n) ; i++){
        if(n%i==0) return false;
    }
}

int main(){
cout<<isPrime(2);



}