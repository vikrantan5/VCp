#include<iostream>

using namespace std;


int fibonnaci(int n ,int last ,int seclast ){
   if(last+seclast > n){
    return 0;
   }
    int temp= last+seclast;
   cout<<last+seclast<<" ";
    seclast = last;
    last = temp;
    fibonnaci(n ,last , seclast);

}

int main(){
    int n;
    cin>>n;
    cout<<0<<" ";

    fibonnaci(n , 0 , 1);
   

}