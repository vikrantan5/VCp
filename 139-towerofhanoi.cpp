#include<iostream>

using namespace std;


void toh(int n , char s , char h , char d){
    if(n==0){
        return;
    }

    toh(n-1 , s , d ,h);
    cout<<s<<"--->"<<d<<endl;
    toh(n-1 , h , s , d);

}

int main(){
    int n;
    cin>>n;
    char s ='A'; 
    char h ='B'; 
    char d ='C'; 
    toh(n , s , h , d);
}