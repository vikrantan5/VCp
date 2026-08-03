#include<iostream>

using namespace std;



bool poweroftwo(int num ,int  n){



    if(num==n){
        return true;
    }
    if(num>n){
        return false;
    }

    return poweroftwo(num*2 , n);
}

int main(){
    int n;
    cin>>n;
    if( poweroftwo(2  , n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}