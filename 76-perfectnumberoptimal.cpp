#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            sum+=i;
            if(n/i != n){
                sum+=n/i;
            }
        }
    }

    if(sum == n){
        cout<<"yes";
    }
    else{
        cout<< "no";
    }


}