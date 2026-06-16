#include<iostream>

using namespace std;


int power(int x,  int n){
    if(n==0){
        return 1;
    }
    return x*power(x , n-1);
}

int main(){
    int x;
    cin>>x;
    cout<<"enter n";
    int n;
    cin>>n;

    int result = power(x , n);
    cout<<result;






}