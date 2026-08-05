#include<iostream>


using namespace std;

void toh( int n , int s , int h , int d){
    if(n==0){
        return;
    }
    toh(n-1 , s , d , h);
    cout<<s <<"-->"<<d<<endl;
    toh(n-1 , h , s , d);
}


int main(){
    int n;
    cin>>n;
    int s = 1;
    int h = 2;
    int d = 3;
    toh(n , s , h , d);
}