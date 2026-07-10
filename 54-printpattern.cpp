#include<iostream>

using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<=i ; j++){
            if(j==i){
                cout<<i+1<<" ";
            }
            else{
                cout<<i+1<<" "<<"*"<<" ";
            }
        }
        cout<<endl;
    }


        for(int i = n-1 ; i>=0 ; i--){
        for(int j = 0 ; j<=i ; j++){
            if(j==i){
                cout<<i+1<<" ";
            }
            else{
                cout<<i+1<<" "<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}