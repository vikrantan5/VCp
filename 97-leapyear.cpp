#include<iostream>

using namespace std;

int leapYear(int n){
     if(n%400==0){
        return 1;
    }
    if(n%100==0){
    return 0;
    }
    if(n%4==0){
        return 1;
    }


    return 0;
}

int main(){
    int n;
    cin>>n;

    int temp=leapYear(n);

    if(temp){
        cout<<"LEAP YEAR";
    }
    else{
        cout<<"NOT LEAP YEAR";
    }
}