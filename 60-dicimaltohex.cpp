#include<iostream>

using namespace std;

int main(){

    int n;

    cin>>n;

    string ans = "";
    while(n>0){

        int digit =n%16;

        if(digit<10){
            ans = char(digit+'0')+ans;
        }
        else{
            ans = char(digit-10 +'A')+ans;
        }

    }
    cout<<ans<<endl;
}