#include<iostream>


using namespace std;

int main(){

    for(int i = 0 ; i<30; i++){


        //space
        for(int j = 1 ; j<=30-i ; j++){
            cout<<" ";
        }
        for(int s = 1 ;s<2*i-1 ; s++){
            if(s%2==0){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
        for(int i = 30 ; i>0; i--){


        //space
        for(int j = 30-i ; j>0 ; j--){
            cout<<" ";
        }
        for(int s = 2*i-1 ;s>0 ; s--){
            if(s%2==0){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}