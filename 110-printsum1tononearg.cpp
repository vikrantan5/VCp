#include<iostream>

using namespace std;

int sumnum(int n){
    if(n==0){
        return 0;
    }

    int val = sumnum(n-1);
    return n+val;
}

int main(){
    int result = sumnum(6);
    cout<<result;
}