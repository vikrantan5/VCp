#include<iostream>

using namespace std ;

void powerme(int num , int power ,int &result){

    if(power==0){
        return;
    }
    result  = result*num;
    powerme(num , power-1 , result);
}


int main(){

    int num ;
    cin>>num;
    int power;
    cin>>power;

    int result = 1;
    
    powerme(num , power , result);

    cout<<result;
}