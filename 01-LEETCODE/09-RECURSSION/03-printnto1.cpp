#include<iostream>

using namespace std;


void printme(int n){
    if(n==0) return;

    cout<<n<<endl;
    printme(n-1);
}


int main(){
    printme(3);
}