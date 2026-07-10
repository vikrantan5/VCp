#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int sum =0;
   int  place = 1;
    while(N>0){
        int digit = N%2;
         sum += place*digit;
         place *=10;
        N/=2;
    }

    cout<<sum;


}