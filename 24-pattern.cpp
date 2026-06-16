#include<iostream>

using namespace std;


int main(){
    for(int i = 1 ; i<10 ; i++){

        for(int col = 1 ; col<=10-i ; col++){
            cout<<" ";
        }
        for(int j = 1 ;j<=2*i-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}