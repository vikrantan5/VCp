// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 
// steps at each level.

#include<iostream>

using namespace std;

int numberofsteps(int m){
    if(m==0){
        return 1;

    }
    if(m<0){
        return 0;
    }

    return numberofsteps(m-1)+numberofsteps(m-2)+numberofsteps(m-3);
}



int main(){
    int stairs;
    cin>>stairs;


    int result = numberofsteps(stairs);
    cout<<result;
}