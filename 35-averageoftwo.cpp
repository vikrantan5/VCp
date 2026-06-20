#include<iostream>


using namespace std;

int avg(int a , int b){
    return (a+b)/2;
}

int main(){
    int a , b;

    cin>>a>>b;

    int result = avg(a , b);

    cout<<result;

    return 0;
}