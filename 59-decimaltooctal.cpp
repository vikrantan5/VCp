#include<iostream>

using namespace std;

int main(){


    int n;
    cin>>n;
    int sum = 0;
    int mul = 1;


    while(n>0){
        int digit = n%8;
        sum = sum+digit*mul;
        mul = mul*10;
        n= n/8;
    }


    cout<<sum<<endl;
    return 0;
}