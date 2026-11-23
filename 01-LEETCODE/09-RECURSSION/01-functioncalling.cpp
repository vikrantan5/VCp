#include<iostream>

using namespace std;


void vikrant(int n){
    if(n==0){
        return;
    }
    cout<<"this is vikrant singh"<<endl;
    n--;
    vikrant(n);
}

int main(){

    vikrant(3);
}