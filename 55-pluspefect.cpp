#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int original = n;

    int x=0;
    int temp= n;
    while(temp>0){
        temp=temp/10;
        x++;
    }
    while(n>0){
        int digit = n%10;
        sum+=pow(digit,x);
        n=n/10;

    }

    if(sum==original){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}