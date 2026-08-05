#include<iostream>

using namespace std;

int summation(int n , int sum){
    if(n==0){
        return 0;
    }
    return n+summation(n-1 , sum);
}


int main(){
    int n;
    cin>>n;
    int sum = 0;
    int result = summation(n , sum);
    cout<<result;
}