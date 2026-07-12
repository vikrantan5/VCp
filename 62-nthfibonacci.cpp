#include<iostream>



using namespace std;

int main(){
    int n;
    cin>>n;


    int first =0;
    int second = 1;
    if(n==0){
        cout<<first;

    }
    if(n==1){
        cout<<second;
    }

    
    while((n-1)>1){
        int next = first+second;
        first = second;
        second = next;
        n--;
    }
    cout<<second;
}