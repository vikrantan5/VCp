#include<iostream>


using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    int ans =0;
    while(n){
        int digit = n%10;
        ans = ans+digit*i;
        i = i*2;
        n/=10;
    }

    cout<<ans;
}