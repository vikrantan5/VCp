#include<iostream>

using namespace std;

int main(){
    int a = 10 , b=16 , c = 20;

    if(a>=b && a>=c)
    cout<<"a is max";
    else if(b >=a && b >=c)
    cout<<"b is max";
    else
    cout<<"c is max";


    return 0;
}