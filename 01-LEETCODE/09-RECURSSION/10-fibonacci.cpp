#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;


    int start=  0;
    int nstart = 1;

    if(n==0){
        cout<<start;
    }
    if(n==1){
        cout<<nstart;
    }

    for(int i = 2 ; i<n ; i++){
        int newnum = start+nstart;
        start = nstart;
        nstart = newnum;
    }

    cout<<nstart;

}