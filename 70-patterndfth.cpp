#include<iostream>
#include<cmath>
using namespace std;

int findPower(int num , int power){
    if(power==0){
        return 1;
    }
    return num * findPower(num , power-1);
}


int main(){
    int n;
    cin>>n;

    

    int result;
    if(n%2==0){
        int temp = n/2;
         result = findPower(2 , temp);
        // result = pow(2 , temp);
        
    }
    else{
        int temp = (n+1)/2-1;
         result =findPower(3 , temp); 
        // result = pow(3 , temp);
    }

    cout<<result;
}